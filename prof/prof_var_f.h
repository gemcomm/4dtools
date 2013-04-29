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

      integer, parameter :: EVN_FERR = -99 ! PRM_EVNT value for fatal error related
      integer, parameter :: EVN_ESIM = -1 ! PRM_EVNT value for end of simulation signal
      integer, parameter :: EVN_TLMO = -2 ! PRM_EVNT value for TLM integration
      integer, parameter :: EVN_ADJM = -3 ! PRM_EVNT value for ADJ model integration
      integer, parameter :: EVN_NLMO = -4 ! PRM_EVNT value for non-linear low resolution model integration
      integer, parameter :: EVN_TLMX = -5 ! PRM_EVNT value for TLM integration with output on grid
      integer, parameter :: EVN_ADJX = -6 ! PRM_EVNT value for ADJ integration with input on grid

      integer, parameter :: PRM_DTST = 0 ! CMC date time stamp
      integer, parameter :: PRM_MVAR = 1 ! Encoded list of variables
      integer, parameter :: PRM_EVNT = 2 ! Event/status
      integer, parameter :: PRM_PEXY = 3 ! X and Y PE coordinates
      integer, parameter :: PRM_STOB = 4 ! Stepobs (minutes)
      integer, parameter :: PRM_NINJ = 5 ! Bit encoded number of grid points in X and Y

      integer, parameter :: V3D_PRES = 0 ! Pressure profile (Pascal)
      integer, parameter :: V3D_UTRU = 1 ! Longitudinal wind component (m/s)
      integer, parameter :: V3D_VTRU = 2 ! Meridional wind component (m/s)
      integer, parameter :: V3D_TEMP = 3 ! Temperature (Kelvin)
      integer, parameter :: V3D_GEOP = 4 ! Geopotential heigth (metre)
      integer, parameter :: V3D_SPHU = 5 ! Specific humidity 0 to 1
      integer, parameter :: V3D_CMAH = 6 ! CMA Header
      integer, parameter :: V3D_CMAB = 7 ! CMA Body

      integer, parameter :: V2D_MTAG = 21 ! Model tags
      integer, parameter :: V2D_FAMT = 22 ! Family type number for cma read/write
      integer, parameter :: V2D_PTOP = 23 ! Pressure at the top of the model (Pascal)
      integer, parameter :: V2D_GEOP = 24 ! Surface geopotential heigth (metre)
      integer, parameter :: V2D_TGRN = 25 ! Ground temperature (Kelvin)
      integer, parameter :: V2D_PSUR = 26 ! Surface pressure (Pascal)
      integer, parameter :: V2D_XPOS = 27 ! X position in model grid
      integer, parameter :: V2D_YPOS = 28 ! Y position in model grid
      integer, parameter :: V2D_LATI = 29 ! -90.0 <= Latitudes (Degree) <= 90.0
      integer, parameter :: V2D_LONG = 30 ! 0.0 < Longitudes (Degree) < 360.0
      integer, parameter :: V2D_OTAG = 31 ! Observation tag



