#? stdlib
`untar2` <- function (tarfile, files = NULL, list = FALSE, exdir = ".", restore_times = TRUE) 
{
    getOctD <- function(x, offset, len) {
        x <- 0
        for (i in offset + seq_len(len)) {
            z <- block[i]
            if (!as.integer(z)) 
                break
            switch(rawToChar(z), ` ` = {
            }, `0` = , `1` = , `2` = , `3` = , `4` = , `5` = , 
                `6` = , `7` = {
                  x <- 8 * x + (as.integer(z) - 48L)
                }, stop("invalid octal digit"))
        }
        x
    }
    getOct <- function(x, offset, len) as.integer(getOctD(x, 
        offset, len))
    checkPath <- function(path) {
        if (.Platform$OS.type == "windows") {
            if (grepl("^[a-zA-Z]:", path)) {
                drv <- sub("^([a-zA-Z]:).*", "\\1", path)
                warning(sprintf("removing drive '%s'", drv))
                path <- sub("^([a-zA-Z]:).*", "", path)
            }
            path <- gsub("\\\\", "/", path)
        }
        if (grepl("^/", path)) {
            warning("removing leading '/'")
            path <- sub("^/+", "", path)
        }
        if (grepl("^~", path)) 
            stop("path starts with '~'")
        parts <- strsplit(path, "/")[[1]]
        if (".." %in% parts) 
            stop("path contains '..'")
        if (length(parts) == 0) 
            stop("path is empty")
        do.call(file.path, as.list(parts))
    }
    mydir.create <- function(path, ..., .checkPath = TRUE) {
        path <- sub("[\\/]$", "", path)
        if (.checkPath) 
            path <- checkPath(path)
        if (dir.exists(path)) 
            return()
        if (!dir.create(path, showWarnings = TRUE, recursive = TRUE, 
            ...)) 
            stop(gettextf("failed to create directory %s", sQuote(path)), 
                domain = NA)
    }
    warn1 <- character()
    if (is.character(tarfile) && length(tarfile) == 1L) {
        con <- gzfile(path.expand(tarfile), "rb")
        on.exit(close(con))
    }
    else if (inherits(tarfile, "connection")) {
        con <- tarfile
    }
    else stop("'tarfile' must be a character string or a connection")
    if (exdir != ".") {
        mydir.create(exdir, .checkPath = FALSE)
        od <- setwd(exdir)
        on.exit(setwd(od), add = TRUE)
    }
    contents <- character()
    llink <- lname <- lsize <- NULL
    repeat {
        block <- readBin(con, "raw", n = 512L)
        if (!length(block)) 
            break
        if (length(block) < 512L) 
            stop(if (is.character(tarfile)) 
                "incomplete block on file"
            else "incomplete block: rather use gzfile(.) created connection?")
        if (all(block == 0)) 
            break
        w <- which(block[1:100] > 0)
        ns <- if (length(w)) 
            max(w)
        else 0
        name <- rawToChar(block[seq_len(ns)])
        magic <- rawToChar(block[258:262])
        if ((magic == "ustar") && block[346L] > 0) {
            ns <- max(which(block[346:500] > 0))
            prefix <- rawToChar(block[345L + seq_len(ns)])
            name <- file.path(prefix, name)
            ns <- nchar(name, "b")
        }
        if (ns <= 0) 
            stop("invalid name field in tarball")
        mode <- as.octmode(getOct(block, 100, 8))
        size <- getOctD(block, 124, 12)
        ts <- getOctD(block, 136, 12)
        ft <- as.POSIXct(as.numeric(ts), origin = "1970-01-01", 
            tz = "UTC")
        csum <- getOct(block, 148, 8)
        block[149:156] <- charToRaw(" ")
        xx <- as.integer(block)
        checksum <- sum(xx)%%2^24
        if (csum != checksum) {
            checksum <- sum(ifelse(xx > 127L, xx - 128L, xx))%%2^24
            if (csum != checksum) 
                warning(gettextf("checksum error for entry '%s'", 
                  name), domain = NA)
        }
        type <- block[157L]
        ctype <- rawToChar(type)
        if (type %in% c(0L, 7L) || ctype == "0") {
            if (!is.null(lname)) {
                name <- lname
                lname <- NULL
            }
            if (!is.null(lsize)) {
                size <- lsize
                lsize <- NULL
            }
            contents <- c(contents, name)
            remain <- size
            dothis <- !list
            if (dothis && length(files)) 
                dothis <- name %in% files
            if (dothis) {
                mydir.create(dirname(name))
                out <- file(name, "wb")
            }
            for (i in seq_len(ceiling(size/512L))) {
                block <- readBin(con, "raw", n = 512L)
                if (length(block) < 512L) 
                  stop("incomplete block on file")
                if (dothis) {
                  writeBin(block[seq_len(min(512L, remain))], 
                    out)
                  remain <- remain - 512L
                }
            }
            if (dothis) {
                close(out)
                Sys.chmod(name, mode, FALSE)
                if (restore_times) 
                  Sys.setFileTime(name, ft)
            }
        }
        else if (ctype %in% c("1", "2")) {
            contents <- c(contents, name)
            ns <- max(which(block[158:257] > 0))
            name2 <- rawToChar(block[157L + seq_len(ns)])
            if (!is.null(lname)) {
                name <- lname
                lname <- NULL
            }
            if (!is.null(llink)) {
                name2 <- llink
                llink <- NULL
            }
            if (!list) {
                if (ctype == "1") {
                  mydir.create(dirname(name))
                  unlink(name)
                  if (!file.link(name2, name)) {
                    if (file.copy(name2, name)) 
                      warn1 <- c(warn1, "restoring hard link as a file copy")
                    else warning(gettextf("failed to copy %s to %s", 
                      sQuote(name2), sQuote(name)), domain = NA)
                  }
                }
                else {
                  if (.Platform$OS.type == "windows") {
                    mydir.create(dirname(name))
                    from <- file.path(dirname(name), name2)
                    if (!file.copy(from, name)) 
                      warning(gettextf("failed to copy %s to %s", 
                        sQuote(from), sQuote(name)), domain = NA)
                    else warn1 <- c(warn1, "restoring symbolic link as a file copy")
                  }
                  else {
                    mydir.create(dirname(name))
                    od0 <- setwd(dirname(name))
                    nm <- basename(name)
                    unlink(nm)
                    if (!file.symlink(name2, nm)) {
                      if (file.copy(name2, nm)) 
                        warn1 <- c(warn1, "restoring symbolic link as a file copy")
                      else warning(gettextf("failed to copy %s to %s", 
                        sQuote(from), sQuote(name)), domain = NA)
                    }
                    setwd(od0)
                  }
                }
            }
        }
        else if (ctype %in% c("3", "4")) {
            warn1 <- c(warn1, "skipping devices")
        }
        else if (ctype == "5") {
            contents <- c(contents, name)
            if (!list) {
                mydir.create(name)
                Sys.chmod(name, mode, TRUE)
            }
        }
        else if (ctype == "6") {
            warn1 <- c(warn1, "skipping fifos")
        }
        else if (ctype %in% c("L", "K")) {
            name_size <- 512L * ceiling(size/512L)
            block <- readBin(con, "raw", n = name_size)
            if (length(block) < name_size) 
                stop("incomplete block on file")
            ns <- max(which(block > 0))
            if (ctype == "L") 
                lname <- rawToChar(block[seq_len(ns)])
            else llink <- rawToChar(block[seq_len(ns)])
        }
        else if (ctype == "x") {
            isUTF8 <- FALSE
            warn1 <- c(warn1, "using pax extended headers")
            info <- readBin(con, "raw", n = 512L * ceiling(size/512L))
            info <- strsplit(rawToChar(info), "\n", fixed = TRUE)[[1]]
            hcs <- grep("[0-9]* hdrcharset=", info, useBytes = TRUE, 
                value = TRUE)
            if (length(hcs)) {
                hcs <- sub("[0-9]* hdrcharset=", hcs, useBytes = TRUE)
                isUTF8 <- identical(hcs, "ISO-IR 10646 2000 UTF-8")
            }
            path <- grep("[0-9]* path=", info, useBytes = TRUE, 
                value = TRUE)
            if (length(path)) {
                lname <- sub("[0-9]* path=", "", path, useBytes = TRUE)
                if (isUTF8) 
                  Encoding(lname) <- "UTF-8"
            }
            linkpath <- grep("[0-9]* linkpath=", info, useBytes = TRUE, 
                value = TRUE)
            if (length(linkpath)) {
                llink <- sub("[0-9]* linkpath=", "", linkpath, 
                  useBytes = TRUE)
                if (isUTF8) 
                  Encoding(llink) <- "UTF-8"
            }
            size <- grep("[0-9]* size=", info, useBytes = TRUE, 
                value = TRUE)
            if (length(size)) 
                lsize <- as.integer(sub("[0-9]* size=", "", size))
        }
        else if (ctype == "g") {
            warn1 <- c(warn1, "skipping pax global extended headers")
            readBin(con, "raw", n = 512L * ceiling(size/512L))
        }
        else stop("unsupported entry type ", sQuote(ctype))
    }
    if (length(warn1)) {
        warn1 <- unique(warn1)
        for (w in warn1) warning(w, domain = NA)
    }
    if (list) 
        contents
    else invisible(0L)
}
