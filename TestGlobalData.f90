
module ModTestGlobalData
   implicit none

contains
   subroutine TestGlobalData1()

      integer:: ii; 
      include 'ModGlobalComm.inc'

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

    include 'ModGlobalComm.inc'

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
