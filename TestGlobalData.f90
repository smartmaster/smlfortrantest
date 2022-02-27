
module ModTestGlobalData
   implicit none

contains
   subroutine TestGlobalData1()

      integer:: ii; 
      integer*8 gval
      integer*8 garr(10)
      character*80 gstr
      character*16 gstrarr(5)
      common /ModGlobalComm/ gval, garr, gstr, gstrarr

      write (*, *) gval; 
      write (*, *) garr; 
      write (*, *) gstr; 
      write (*, *) gstrarr; 
      gval = -gval; 
      do ii = 1, 10
         garr(ii) = -garr(ii); 
      end do

   end subroutine

   subroutine TestGlobalData2()

      integer*8 gval
      integer*8 garr(10)
      character*80 gstr
      character*16 gstrarr(5)
      common /ModGlobalComm/ gval, garr, gstr, gstrarr


      integer:: ii; 
      write (*, *) gval; 
      write (*, *) garr; 
      write (*, *) gstr; 
      write (*, *) gstrarr; 
      gval = -gval; 
      do ii = 1, 10
         garr(ii) = -garr(ii); 
      end do

   end subroutine

end module
