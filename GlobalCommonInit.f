        block data ModGlobalCommInit

            integer*8 gval
            integer*8 garr(10)
            character*80 gstr
            character*16 gstrarr(5)
            common/ModGlobalComm/gval, garr, gstr, gstrarr

            data gval/111/, garr/10*222/, gstr/"hello"/

         end block data

