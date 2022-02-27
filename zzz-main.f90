
module Modmain
   implicit none
contains
   subroutine main()
      use ModTestGlobalData;

      integer*8 testCase; 
      testCase = 0; 
      select case (testCase)
      case (2)
         continue; 
      case (1)
         continue; 
      case (0)
         call OldF77();
         call OldF7701();
         call OldF7702();
         call CallOthers();
         call TestGlobalData1();
         call TestGlobalData2();
         call TestGlobalData1();
         call TestGlobalData2();
         continue; 
      case default
         continue; 
      end select

   end subroutine

end module

program mainprogram
   use ModMain; 
   implicit none
   call main(); 
end program
