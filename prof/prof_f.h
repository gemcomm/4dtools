!
!/* LibProf - Communication Library for data assimilation coupling 
! * Copyright (C) 2001-2002  Data Assimilation and Satellite Meteorology Division
! *                          Meteorological Service of Canada
! *
! * This library is free software; you can redistribute it and/or
! * modify it under the terms of the GNU Lesser General Public
! * License as published by the Free Software Foundation,
! * version 2.1 of the License.
! *
! * This library is distributed in the hope that it will be useful,
! * but WITHOUT ANY WARRANTY; without even the implied warranty of
! * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
! * Lesser General Public License for more details.
! *
! * You should have received a copy of the GNU Lesser General Public
! * License along with this library; if not, write to the
! * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
! * Boston, MA 02111-1307, USA.
! */
!
! Author: Simon Pellerin, ARMA/MSC, 2001
!
! Revision:
!

      include 'prof_var_f.h'
      
      interface
         function prof_open(file,mode,com,dsnooze)
         implicit none
         integer :: prof_open   ! logical unit; < 0 => problems opening CDFILE
         character (len=*),intent(in) :: file ! full path/name or communicator name
         character (len=*),intent(in) :: mode ! 'READ', 'WRITE'
         character (len=*),intent(in) :: com ! FILE, SOCKET or PALM
         real*8, optional :: dsnooze
         end function prof_open

         function prof_close(hdl,lrm)
         implicit none
         integer :: prof_close  ! < 0 => problems
         integer :: hdl
         logical, optional :: lrm
         end function prof_close
      end interface
      
      interface prof_gvar
        function prof_gprm(klun,kval,kno)
          implicit none
          integer :: klun
          integer :: kval
          integer :: kno
          integer :: prof_gprm 
        end function prof_gprm
        function prof_gi2dv(klun,kval,kno)
          implicit none
          integer :: klun
          integer, pointer, dimension(:) :: kval
          integer :: kno
          integer :: prof_gi2dv
        end function prof_gi2dv
        function prof_gi3dv(klun,kval,kno)
          implicit none
          integer :: klun
          integer, pointer, dimension(:,:) :: kval
          integer :: kno
          integer :: prof_gi3dv
        end function prof_gi3dv
        function prof_gr2dv(klun,pval,kno)
          implicit none
          integer :: klun
          real, pointer, dimension(:) :: pval
          integer :: kno
          integer :: prof_gr2dv
        end function prof_gr2dv
        function prof_gr3dv(klun,pval,kno)
          implicit none
          integer :: klun
          real, pointer, dimension(:,:) :: pval
          integer :: kno
          integer :: prof_gr3dv
        end function prof_gr3dv
        function prof_gd2dv(klun,ddval,kno)
          implicit none
          integer :: klun
          real*8, pointer, dimension(:) :: ddval
          integer :: kno
          integer :: prof_gd2dv
        end function prof_gd2dv
        function prof_gd3dv(klun,ddval,kno)
          implicit none
          integer :: klun
          real*8, pointer, dimension(:,:) :: ddval
          integer :: kno
          integer :: prof_gd3dv
        end function prof_gd3dv
      end interface

      interface prof_pvar
        function prof_pprm(klun,kval,kno)
          implicit none
          integer :: klun
          integer :: kval
          integer :: kno
          integer :: prof_pprm
        end function prof_pprm
        function prof_pi2dv(klun,kval,kno)
          implicit none
          integer :: klun
          integer, intent(in), dimension(:) :: kval
          integer, intent(in) :: kno
          integer :: prof_pi2dv
        end function prof_pi2dv
        function prof_pi3dv(klun,kval,kno)
          implicit none
          integer :: klun
          integer, intent(in), dimension(:,:) :: kval
          integer, intent(in) :: kno
          integer :: prof_pi3dv
        end function prof_pi3dv
        function prof_pr2dv(klun,pval,kno)
          implicit none
          integer :: klun
          real, intent(in), dimension(:) :: pval
          integer, intent(in) :: kno
          integer :: prof_pr2dv
        end function prof_pr2dv
        function prof_pr3dv(klun,pval,kno)
          implicit none
          integer :: klun
          real, intent(in), dimension(:,:) :: pval
          integer, intent(in) :: kno
          integer :: prof_pr3dv
        end function prof_pr3dv
        function prof_pd2dv(klun,ddval,kno)
          implicit none
          integer :: klun
          real*8, intent(in), dimension(:) :: ddval
          integer, intent(in) :: kno
          integer :: prof_pd2dv
        end function prof_pd2dv
        function prof_pd3dv(klun,ddval,kno)
          implicit none
          integer :: klun
          real*8, intent(in), dimension(:,:) :: ddval
          integer, intent(in) :: kno
          integer :: prof_pd3dv
        end function prof_pd3dv
      end interface

