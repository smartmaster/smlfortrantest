

            subroutine f77ucomm1()

                integer*8 gval
                integer*8 garr(10)
                character*80 gstr
                character*16 gstrarr(5)

                common /f77UComm/ gval
                common /f77UComm/ garr
                common /f77UComm/ gstr
                common /f77UComm/ gstrarr

                integer ii
                
                write(*,*) gval
                write(*,*) garr
                write(*,*) gstr
                write(*,*) gstrarr

                gval = gval + 1
                do ii = 1,10
                    garr(ii) = gval
                end do

                if (mod(gval, 2) .eq. 0) then
                    gstr = 'even?'
                    do ii = 1,5
                        gstrarr(ii) = 'even!'
                    end do
                else
                    gstr = 'odd?'
                    do ii = 1,5
                        gstrarr(ii) = 'odd!'
                    end do
                end if

    
             end
    
    