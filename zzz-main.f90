
module Modmain
   implicit none

contains

   subroutine PassArrArr()
      character*15 strarr(5)
      integer arrlen;

      integer ii

      arrlen = 5

      do ii = 1, arrlen
         strarr(ii) = 'zzzz'
      end do

      call oldf7705(strarr, arrlen)
      call oldf7705(strarr, arrlen)

   end subroutine

   subroutine Passparams()
      use ModTestGlobalData;

      integer*4 pii1;
      character*15 pcc1;
      integer*8 pii2;
      character*31 pcc2;
      integer*4 parrlen;
      integer*4 parr(5);   

      pii1 = 100
      pcc1 = 'hello15'
      pii2 = 200
      pcc2 = 'world31'
      parrlen = 5
      data parr/5*10/
      call OldF7704(pii1,pcc1,pii2, pcc2, parr, parrlen);
         call OldF7704(pii1,pcc1,pii2, pcc2, parr, parrlen);

      end subroutine

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
         call PassArrArr();
         call OldF77();
         call OldF7701();
         call OldF7702();
         call OldF7703();
         call Passparams();
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
