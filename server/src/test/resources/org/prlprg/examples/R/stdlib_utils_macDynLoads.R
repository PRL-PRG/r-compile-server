#? stdlib
`macDynLoads` <- function (filename, arch, info = c("loads", "id", "rpaths", "fat", 
    "head")) 
{
    if (inherits(filename, "connection")) {
        if (!isSeekable(f)) 
            stop("Source must be a seekable connection")
        f <- filename
    }
    else {
        f <- file(path.expand(filename), "rb")
        on.exit(close(f))
    }
    if (missing(arch)) 
        arch <- NULL
    if (is.logical(info)) 
        info <- if (isTRUE(info)) 
            "head"
        else "loads"
    info <- match.arg(info)
    magic <- readBin(f, 1L, 1L, endian = "big")
    magic.fat <- -889275714L
    magic.mh <- -17958194L
    magic.hm <- -822415874L
    magic.mh64 <- -17958193L
    magic.hm64 <- -805638658L
    cpu.types <- c(vax = 1L, i386 = 7L, x86_64 = 16777223L, arm = 12L, 
        arm64 = 16777228L, `arm64-32` = 33554444L, sparc = 14L, 
        ppc = 18L, ppc64 = 16777234)
    LC_LOAD_DYLIB <- 12L
    LC_ID_DYLIB <- 13L
    LC_RPATH <- 2147483676
    i2r <- function(i) ifelse(i < 0, 4294967296 + i, i)
    cpu2name <- function(ct) {
        cpu <- match(ct, cpu.types)
        if (!is.na(cpu)) 
            names(cpu.types)[cpu]
        else "<unknown>"
    }
    if (magic == magic.fat) {
        n.archs <- readBin(f, 1L, 1L, endian = "big")
        if (n.archs < 0) 
            return(list())
        archs <- replicate(n.archs, {
            ai <- i2r(readBin(f, 1L, 5L, endian = "big"))
            list(cpu = cpu2name(ai[1L]), type = ai[1:2], offset = ai[3L], 
                size = ai[4L])
        }, FALSE)
        names(archs) <- sapply(archs, function(o) o$cpu)
        if (info == "fat") 
            return(archs)
        if (is.null(arch)) {
            r.arch <- archs[[R.Version()$arch]]
            if (is.null(r.arch)) 
                r.arch <- archs[[1L]]
        }
        else r.arch <- archs[[arch]]
        if (is.null(r.arch)) 
            return(NULL)
        seek(f, r.arch$offset, "start", "read")
        magic <- readBin(f, 1L, 1L, endian = "big")
    }
    else if (info == "fat") 
        return(NULL)
    if (magic == magic.mh || magic == magic.hm || magic == magic.mh64 || 
        magic == magic.hm64) {
        end <- if (magic == magic.mh || magic == magic.mh64) 
            "big"
        else "little"
        abi <- if (magic == magic.mh || magic == magic.hm) 
            32L
        else 64L
        mh <- i2r(readBin(f, 1L, 6L + if (abi == 64L) 
            1L
        else 0L, endian = end))
        if (info == "head") 
            return(list(cpu = cpu2name(mh[1L]), type = mh[1:2], 
                filetype = mh[3L], endian = end, abi = abi))
        unlist(replicate(mh[4L], {
            lc <- i2r(readBin(f, 1L, 2L, endian = end))
            if ((lc[1L] == LC_LOAD_DYLIB && info == "loads" && 
                lc[2L] > 24L) || (lc[1L] == LC_ID_DYLIB && info == 
                "id" && lc[2L] > 24L) || (lc[1L] == LC_RPATH && 
                info == "rpaths" && lc[2L] > 12L)) {
                nent <- if (lc[1L] == LC_RPATH) 
                  1L
                else 4L
                ld <- i2r(readBin(f, 1L, nent, endian = end))
                r <- readBin(f, raw(), lc[2L] - (8L + nent * 
                  4L))
                o <- ld[1L] - (8L + nent * 4L)
                if (o < length(r) && o > 0) 
                  r <- r[seq.int(o + 1L, length(r))]
                if (any(r == 0L)) 
                  r <- r[1:(which(r == 0L)[1L] - 1L)]
                rawToChar(r)
            }
            else {
                seek(f, lc[2L] - 8, "current", "read")
                NULL
            }
        }))
    }
}
