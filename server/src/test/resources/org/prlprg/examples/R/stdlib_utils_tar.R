#? stdlib
`tar` <- function (tarfile, files = NULL, compression = c("none", "gzip", 
    "bzip2", "xz"), compression_level = 6, tar = Sys.getenv("tar"), 
    extra_flags = "") 
{
    if (is.character(tarfile)) {
        if (nzchar(tar) && tar != "internal") {
            if (is.null(files)) {
                files <- list.files(all.files = TRUE, full.names = TRUE, 
                  include.dirs = TRUE)
                files <- setdiff(files, c("./.", "./.."))
            }
            flags <- switch(match.arg(compression), none = "-cf", 
                gzip = "-zcf", bzip2 = "-jcf", xz = "-Jcf")
            if (grepl("darwin", R.version$os)) {
                tar <- paste("COPYFILE_DISABLE=1", tar)
            }
            if (is.null(extra_flags)) 
                extra_flags <- ""
            nc <- nchar(ff <- paste(shQuote(files), collapse = " "))
            if (nc > 1000 && any(grepl("(GNU tar|libarchive)", 
                tryCatch(system(paste(tar, "--version"), intern = TRUE), 
                  error = function(e) "")))) {
                tf <- tempfile("Rtar")
                on.exit(unlink(tf))
                writeLines(files, tf)
                cmd <- paste(tar, extra_flags, flags, shQuote(tarfile), 
                  "-T", shQuote(tf))
            }
            else {
                cmd <- paste(tar, extra_flags, flags, shQuote(tarfile), 
                  ff)
            }
            return(invisible(system(cmd)))
        }
        if (is.null(files)) 
            files <- "."
        isd <- dir.exists(files)
        files <- c(list.files(files[isd], recursive = TRUE, all.files = TRUE, 
            full.names = TRUE, include.dirs = TRUE), files[!isd])
        con <- switch(match.arg(compression), none = file(tarfile, 
            "wb"), gzip = gzfile(tarfile, "wb", compression = compression_level), 
            bzip2 = bzfile(tarfile, "wb", compression = compression_level), 
            xz = xzfile(tarfile, "wb", compression = compression_level))
        on.exit(close(con))
    }
    else if (inherits(tarfile, "connection")) 
        con <- tarfile
    else stop("'tarfile' must be a character string or a connection")
    GNUname <- function(name, link = FALSE) {
        header <- raw(512L)
        n1 <- charToRaw("ExtendedName")
        header[seq_along(n1)] <- n1
        header[157L] <- charToRaw(ifelse(link, "K", "L"))
        size <- length(name)
        header[125:135] <- charToRaw(sprintf("%011o", as.integer(size)))
        header[149:156] <- charToRaw(" ")
        checksum <- sum(as.integer(header))%%2^24
        header[149:154] <- charToRaw(sprintf("%06o", as.integer(checksum)))
        header[155L] <- as.raw(0L)
        writeBin(header, con)
        writeBin(name, con)
        ssize <- 512L * ceiling(size/512L)
        if (ssize > size) 
            writeBin(raw(ssize - size), con)
    }
    warn1 <- character()
    invalid_uid <- invalid_gid <- FALSE
    for (f in unique(files)) {
        info <- file.info(f)
        if (is.na(info$size)) {
            warning(gettextf("file '%s' not found", f), domain = NA)
            next
        }
        header <- raw(512L)
        if (info$isdir && !endsWith(f, "/")) 
            f <- paste0(f, "/")
        name <- charToRaw(f)
        if (length(name) > 100L) {
            OK <- TRUE
            if (length(name) > 256L) 
                OK <- FALSE
            else {
                m <- length(name)
                s <- max(which(name[1:min(156, m - 1L)] == charToRaw("/")))
                if (is.infinite(s) || s + 100L < length(name)) 
                  OK <- FALSE
            }
            warning("storing paths of more than 100 bytes is not portable:\n  ", 
                sQuote(f), domain = NA)
            if (OK) {
                prefix <- name[1:(s - 1L)]
                name <- name[-(1:s)]
                header[345L + seq_along(prefix)] <- prefix
            }
            else {
                GNUname(name)
                name <- charToRaw("dummy")
                warn1 <- c(warn1, "using GNU extension for long pathname")
            }
        }
        header[seq_along(name)] <- name
        mode <- info$mode
        if (is.null(extra_flags) && grepl("/(configure|cleanup)$", 
            f) && (mode & "111") != as.octmode("111")) {
            warning(gettextf("file '%s' did not have execute permissions: corrected", 
                f), domain = NA, call. = FALSE)
            mode <- mode | "111"
        }
        header[101:107] <- charToRaw(sprintf("%07o", mode))
        uid <- info$uid
        if (!is.null(uid) && !is.na(uid)) {
            if (uid < 0L || uid > 32767L) {
                invalid_uid <- TRUE
                uid <- 32767L
            }
            header[109:115] <- charToRaw(sprintf("%07o", uid))
        }
        gid <- info$gid
        if (!is.null(gid) && !is.na(gid)) {
            if (gid < 0L || gid > 32767L) {
                invalid_gid <- TRUE
                gid <- 32767L
            }
            header[117:123] <- charToRaw(sprintf("%07o", gid))
        }
        header[137:147] <- charToRaw(sprintf("%011o", as.integer(info$mtime)))
        if (info$isdir) 
            header[157L] <- charToRaw("5")
        else {
            lnk <- Sys.readlink(f)
            if (is.na(lnk)) 
                lnk <- ""
            header[157L] <- charToRaw(ifelse(nzchar(lnk), "2", 
                "0"))
            if (nzchar(lnk)) {
                if (nchar(lnk, "b") > 100L) {
                  GNUname(charToRaw(lnk), TRUE)
                  warn1 <- c(warn1, "using GNU extension for long linkname")
                  lnk <- "dummy"
                }
                header[157L + seq_len(nchar(lnk))] <- charToRaw(lnk)
                size <- 0
            }
        }
        size <- if (info$isdir) 
            0
        else info$size
        if (size >= 8^11) 
            stop("file size is limited to 8GB")
        header[125:135] <- .Call(C_octsize, size)
        header[258:262] <- charToRaw("ustar")
        header[264:265] <- charToRaw("0")
        for (frag in list(list("uname", 265L), list("grname", 
            297L))) {
            s <- info[[frag[[1L]]]]
            if (!is.null(s) && !is.na(s)) {
                ns <- nchar(s, "b")
                if (ns > 32L) {
                  warn1 <- c(warn1, sprintf("truncating %d character long '%s'", 
                    ns, frag[[1L]]))
                  ns <- 32L
                }
                i <- seq_len(ns)
                header[frag[[2L]] + i] <- charToRaw(s)[i]
            }
        }
        header[149:156] <- charToRaw(" ")
        checksum <- sum(as.integer(header))%%2^24
        header[149:154] <- charToRaw(sprintf("%06o", as.integer(checksum)))
        header[155L] <- as.raw(0L)
        writeBin(header, con)
        if (info$isdir || nzchar(lnk)) 
            next
        inf <- file(f, "rb")
        for (i in seq_len(ceiling(info$size/512L))) {
            block <- readBin(inf, "raw", 512L)
            writeBin(block, con)
            if ((n <- length(block)) < 512L) 
                writeBin(raw(512L - n), con)
        }
        close(inf)
    }
    if (invalid_uid) 
        warning("invalid uid value replaced by that for user 'nobody'", 
            call. = FALSE)
    if (invalid_gid) 
        warning("invalid gid value replaced by that for user 'nobody'", 
            call. = FALSE)
    block <- raw(512L)
    writeBin(block, con)
    writeBin(block, con)
    if (length(warn1)) {
        warn1 <- unique(warn1)
        for (w in warn1) warning(w, domain = NA)
    }
    invisible(0L)
}

# Examples
