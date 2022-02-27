        subroutine OldF77()
           implicit none

           integer*8 gval
           integer*8 garr(10)
           character*80 gstr
           character*16 gstrarr(5)
           common/ModGlobalComm/gval, garr, gstr, gstrarr

           integer*8 ii

           integer*1 ii1
           integer*2 ii2
           integer*4 ii4
           integer*8 ii8

           logical*1 ll1
           logical*2 ll2
           logical*4 ll4
           integer*8 ll8

           real*4 r4
           real*8 r8

           ii1 = 1
           ii2 = 2
           ii4 = 4
           ii8 = 8

           ll1 = .TRUE.
           ll2 = .TRUE.
           ll4 = .TRUE.
           ll8 = -1

           r4 = 4.0
           r8 = 8.0

           write (*, *) ii1, ii2, ii4, ii8
           write (*, *) ll1, ll2, ll4, ll8
           write (*, *) r4, r8

           write (*, *) gval
           write (*, *) garr
           write (*, *) gstr
           write (*, *) gstrarr

           gval = -gval
           do ii = 10, 1, -1
              garr(ii) = -garr(ii)
           end do

           if (gval .GT. 0) then
            gstr = "hello"
            do ii = 5, 1, -1
               gstrarr(ii) = "hello"
            end do
           else
            gstr = "world"
            do ii = 5, 1, -1
               gstrarr(ii) = "world"
            end do
           end if
           
        end

