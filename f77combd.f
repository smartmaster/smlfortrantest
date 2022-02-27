

            block data f77Commbd
                !include 'F77COMM.INC'
                integer*8 gval
                integer*8 garr(10)
                character*80 gstr
                character*16 gstrarr(5)

                common /f77Comm/ gval
                common /f77Comm/ garr
                common /f77Comm/ gstr
                common /f77Comm/ gstrarr
                
                data gval/777/
                data garr/10*888/
                data gstr/'hello'/
                data gstrarr/'a', 'b', 'c', 'd', 'e'/
    
             end block data
    
    