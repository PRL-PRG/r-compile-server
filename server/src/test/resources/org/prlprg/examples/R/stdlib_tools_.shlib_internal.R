#? stdlib
`.shlib_internal` <- function (args) 
{
    Usage <- function() cat("Usage: R CMD SHLIB [options] files | linker options", 
        "", "Build a shared object for dynamic loading from the specified source or", 
        "object files (which are automagically made from their sources) or", 
        "linker options.  If not given via '--output', the name for the shared", 
        "object is determined from the first source or object file.", 
        "", "Options:", "  -h, --help\t\tprint short help message and exit", 
        "  -v, --version\t\tprint version info and exit", "  -o, --output=LIB\tuse LIB as (full) name for the built library", 
        "  -c, --clean\t\tremove files created during compilation", 
        "  --preclean\t\tremove files created during a previous run", 
        "  -n, --dry-run\t\tdry run, showing commands that would be used", 
        "  --use-LTO\t\tuse Link-Time Optimization", "  --no-use-LTO\t\tdo not use Link-Time Optimization", 
        "  --use-C17\t        use a C standard at most C17 (alsp C90, C99)", 
        "  --use-C23\t        use a C standard at least C23", 
        "", "Windows only:", "  -d, --debug\t\tbuild a debug DLL", 
        "", "Report bugs at <https://bugs.R-project.org>.", sep = "\n")
    p1 <- function(...) paste(..., collapse = " ")
    WINDOWS <- .Platform$OS.type == "windows"
    cross <- Sys.getenv("R_CROSS_BUILD")
    if (nzchar(cross)) {
        if (!cross %in% c("x64", "singlearch")) 
            stop("invalid value ", sQuote(cross), " for R_CROSS_BUILD")
        WINDOWS <- TRUE
        Sys.setenv(R_ARCH = if (cross == "singlearch") 
            ""
        else paste0("/", cross))
    }
    if (!WINDOWS) {
        mconf <- readLines(file.path(paste0(R.home("etc"), Sys.getenv("R_ARCH")), 
            "Makeconf"))
        SHLIB_EXT <- sub(".*= ", "", grep("^SHLIB_EXT", mconf, 
            value = TRUE, perl = TRUE))
        SHLIB_LIBADD <- sub(".*= ", "", grep("^SHLIB_LIBADD", 
            mconf, value = TRUE, perl = TRUE))
        MAKE <- Sys.getenv("MAKE")
        rarch <- Sys.getenv("R_ARCH")
    }
    else {
        rhome <- chartr("\\", "/", R.home())
        Sys.setenv(R_HOME = rhome)
        SHLIB_EXT <- ".dll"
        SHLIB_LIBADD <- ""
        MAKE <- "make"
        rarch <- Sys.getenv("R_ARCH", NA_character_)
        if (is.na(rarch)) {
            if (nzchar(.Platform$r_arch)) {
                rarch <- paste0("/", .Platform$r_arch)
                Sys.setenv(R_ARCH = rarch)
            }
            else rarch <- ""
        }
    }
    OBJ_EXT <- ".o"
    objs <- character()
    shlib <- ""
    makefiles <- c(file.path(paste0(R.home("etc"), rarch), "Makeconf"), 
        makevars_site(), file.path(R.home("share"), "make", if (WINDOWS) "winshlib.mk" else "shlib.mk"))
    shlib_libadd <- if (nzchar(SHLIB_LIBADD)) 
        SHLIB_LIBADD
    else character()
    with_c <- FALSE
    with_cxx <- FALSE
    with_f77 <- FALSE
    with_f9x <- FALSE
    with_objc <- FALSE
    use_cxxstd <- NULL
    use_fc_link <- FALSE
    use_lto <- NA
    use_C <- ""
    pkg_libs <- character()
    clean <- FALSE
    preclean <- FALSE
    dry_run <- FALSE
    debug <- FALSE
    while (length(args)) {
        a <- args[1L]
        if (a %in% c("-h", "--help")) {
            Usage()
            return(0L)
        }
        else if (a %in% c("-v", "--version")) {
            cat("R shared object builder: ", R.version[["major"]], 
                ".", R.version[["minor"]], " (r", R.version[["svn rev"]], 
                ")\n", sep = "")
            cat("", .R_copyright_msg(2000), "This is free software; see the GNU General Public License version 2", 
                "or later for copying conditions.  There is NO warranty.", 
                sep = "\n")
            return(0L)
        }
        else if (a %in% c("-n", "--dry-run")) {
            dry_run <- TRUE
        }
        else if (a %in% c("-d", "--debug")) {
            debug <- TRUE
        }
        else if (a %in% c("-c", "--clean")) {
            clean <- TRUE
        }
        else if (a == "--preclean") {
            preclean <- TRUE
        }
        else if (a == "--use-LTO") {
            use_lto <- TRUE
        }
        else if (a == "--no-use-LTO") {
            use_lto <- FALSE
        }
        else if (a == "--use-C17") {
            use_C <- 17
        }
        else if (a == "--use-C23") {
            use_C <- 23
        }
        else if (a == "--use-C90") {
            use_C <- 90
        }
        else if (a == "--use-C99") {
            use_C <- 99
        }
        else if (a == "-o") {
            if (length(args) >= 2L) {
                shlib <- args[2L]
                args <- args[-1L]
            }
            else stop("-o option without value", call. = FALSE)
        }
        else if (substr(a, 1, 9) == "--output=") {
            shlib <- substr(a, 10, 1000)
        }
        else {
            base <- sub("\\.[[:alnum:]]*$", "", a)
            ext <- sub(paste0(base, "."), "", a, fixed = TRUE)
            nobj <- ""
            if (nzchar(ext)) {
                if (ext %in% c("cc", "cpp")) {
                  with_cxx <- TRUE
                  nobj <- base
                }
                else if (ext == "m") {
                  with_objc <- TRUE
                  nobj <- base
                }
                else if (ext %in% c("mm", "M")) {
                  with_objc <- with_cxx <- TRUE
                  nobj <- base
                }
                else if (ext == "f") {
                  with_f77 <- TRUE
                  nobj <- base
                }
                else if (ext %in% c("f90", "f95")) {
                  with_f9x <- TRUE
                  nobj <- base
                }
                else if (ext == "c") {
                  with_c <- TRUE
                  nobj <- base
                }
                else if (ext == "o") {
                  nobj <- base
                }
                if (nzchar(nobj) && !nzchar(shlib)) 
                  shlib <- paste0(nobj, SHLIB_EXT)
            }
            if (nzchar(nobj)) 
                objs <- c(objs, nobj)
            else pkg_libs <- c(pkg_libs, a)
        }
        args <- args[-1L]
    }
    if (length(objs)) 
        objs <- paste0(objs, OBJ_EXT, collapse = " ")
    makefiles <- c(makefiles, makevars_user())
    makeobjs <- paste0("OBJECTS=", shQuote(objs))
    if (WINDOWS && (file.exists(fn <- "Makevars.ucrt") || file.exists(fn <- "Makevars.win"))) {
        makefiles <- c(fn, makefiles)
        lines <- readLines(fn, warn = FALSE)
        if (length(grep("^OBJECTS *=", lines, perl = TRUE, useBytes = TRUE))) 
            makeobjs <- ""
        if (length(ll <- grep("^CXX_STD *=", lines, perl = TRUE, 
            value = TRUE, useBytes = TRUE)) == 1) {
            val <- gsub("^CXX_STD *= *CXX", "", ll)
            val <- gsub(" +$", "", val)
            if (val %in% cxx_standards) {
                use_cxxstd <- val
                with_cxx <- TRUE
            }
        }
        if (any(grepl("^USE_FC_TO_LINK", lines, perl = TRUE, 
            useBytes = TRUE))) 
            use_fc_link <- TRUE
    }
    else if (file.exists("Makevars")) {
        makefiles <- c("Makevars", makefiles)
        lines <- readLines("Makevars", warn = FALSE)
        if (length(grep("^OBJECTS *=", lines, perl = TRUE, useBytes = TRUE))) 
            makeobjs <- ""
        if (length(ll <- grep("^CXX_STD *=", lines, perl = TRUE, 
            value = TRUE, useBytes = TRUE)) == 1) {
            val <- gsub("^CXX_STD *= *CXX", "", ll)
            val <- gsub(" +$", "", val)
            if (val %in% cxx_standards) {
                use_cxxstd <- val
                with_cxx <- TRUE
            }
        }
        if (any(grepl("^USE_FC_TO_LINK", lines, perl = TRUE, 
            useBytes = TRUE))) 
            use_fc_link <- TRUE
    }
    if (is.null(use_cxxstd)) {
        for (i in cxx_standards) {
            if (nzchar(Sys.getenv(paste0("USE_CXX", i)))) {
                use_cxxstd <- i
                break
            }
        }
    }
    if (is.null(use_cxxstd)) {
        val <- Sys.getenv("R_PKG_CXX_STD")
        if (val %in% cxx_standards) {
            use_cxxstd <- val
        }
    }
    if (with_cxx) {
        checkCXX <- function(cxxstd) {
            for (i in rev(seq_along(makefiles))) {
                lines <- readLines(makefiles[i], warn = FALSE)
                pattern <- paste0("^CXX", cxxstd, " *= *")
                ll <- grep(pattern, lines, perl = TRUE, value = TRUE, 
                  useBytes = TRUE)
                for (j in rev(seq_along(ll))) {
                  cxx <- gsub(pattern, "", ll[j])
                  return(nzchar(cxx))
                }
            }
            return(FALSE)
        }
        if (!is.null(use_cxxstd)) {
            if (use_cxxstd == "98") {
                stop("C++98 standard requested but unsupported", 
                  call. = FALSE, domain = NA)
            }
            if (!checkCXX(use_cxxstd)) {
                stop(paste0("C++", use_cxxstd, " standard requested but CXX", 
                  use_cxxstd, " is not defined"), call. = FALSE, 
                  domain = NA)
            }
        }
    }
    makeargs <- paste0("SHLIB=", shQuote(shlib))
    if (with_cxx) {
        if (!is.null(use_cxxstd)) {
            cxx_makeargs <- sprintf(c("CXX='$(CXX%s) $(CXX%sSTD)'", 
                "CXXFLAGS='$(CXX%sFLAGS)'", "CXXPICFLAGS='$(CXX%sPICFLAGS)'", 
                "SHLIB_LDFLAGS='$(SHLIB_CXX%sLDFLAGS)'", "SHLIB_LD='$(SHLIB_CXX%sLD)'"), 
                use_cxxstd, use_cxxstd)
            makeargs <- c(cxx_makeargs, makeargs)
        }
        else {
            makeargs <- c("SHLIB_LDFLAGS='$(SHLIB_CXXLDFLAGS)'", 
                "SHLIB_LD='$(SHLIB_CXXLD)'", makeargs)
        }
    }
    else if (use_fc_link && (with_f77 || with_f9x)) 
        makeargs <- c("SHLIB_LDFLAGS='$(SHLIB_FCLDFLAGS)'", "SHLIB_LD='$(SHLIB_FCLD)'", 
            "ALL_LIBS='$(PKG_LIBS) $(SHLIB_LIBADD) $(SAN_LIBS)'", 
            makeargs)
    if (with_objc) 
        shlib_libadd <- c(shlib_libadd, "$(OBJC_LIBS)")
    if (with_f77 || with_f9x) {
        if (use_fc_link) 
            shlib_libadd <- c(shlib_libadd, "$(FCLIBS_XTRA)")
        else shlib_libadd <- c(shlib_libadd, "$(FLIBS) $(FCLIBS_XTRA)")
    }
    if (nzchar(use_C)) {
        checkC <- function(cstd) {
            for (i in rev(seq_along(makefiles))) {
                lines <- readLines(makefiles[i], warn = FALSE)
                pattern <- paste0("^CC", cstd, " *= *")
                ll <- grep(pattern, lines, perl = TRUE, value = TRUE, 
                  useBytes = TRUE)
                for (j in rev(seq_along(ll))) {
                  cs <- gsub(pattern, "", ll[j])
                  return(nzchar(cs))
                }
            }
            return(FALSE)
        }
        if (!checkC(use_C)) {
            stop(paste0("C", use_C, " standard requested but CC", 
                use_C, " is not defined"), call. = FALSE, domain = NA)
        }
        c_makeargs <- sprintf(c("CC='$(CC%s)'", "CFLAGS='$(C%sFLAGS)'"), 
            use_C)
        makeargs <- c(c_makeargs, makeargs)
    }
    if (length(pkg_libs)) 
        makeargs <- c(makeargs, paste0("PKG_LIBS='", p1(pkg_libs), 
            "'"))
    if (length(shlib_libadd)) 
        makeargs <- c(makeargs, paste0("SHLIB_LIBADD='", p1(shlib_libadd), 
            "'"))
    if (with_f9x && file.exists("Makevars") && length(grep("^\\s*PKG_FCFLAGS", 
        lines, perl = TRUE, useBytes = TRUE))) 
        makeargs <- c(makeargs, "P_FCFLAGS='$(PKG_FCFLAGS)'")
    if (WINDOWS && debug) 
        makeargs <- c(makeargs, "DEBUG=T")
    if (WINDOWS && rarch == "/x64") 
        makeargs <- c(makeargs, "WIN=64 TCLBIN=")
    build_objects_symbol_tables <- config_val_to_logical(Sys.getenv("_R_SHLIB_BUILD_OBJECTS_SYMBOL_TABLES_", 
        "FALSE"))
    makeargs <- c(makeargs, if (isTRUE(use_lto)) c(paste0("LTO=", 
        shQuote("$(LTO_OPT)")), paste0("LTO_FC=", shQuote("$(LTO_FC_OPT)"))) else if (isFALSE(use_lto)) c("LTO=", 
        "LTO_FC="))
    if (config_val_to_logical(Sys.getenv("_R_CXX_USE_NO_REMAP_", 
        "FALSE"))) 
        makeargs <- c(makeargs, "CXX_DEFS=-DR_NO_REMAP")
    cmd <- paste(MAKE, p1(paste("-f", shQuote(makefiles))), p1(makeargs), 
        p1(makeobjs))
    if (dry_run) {
        cat("make cmd is\n  ", cmd, "\n\nmake would use\n", sep = "")
        system(paste(cmd, "-n"))
        res <- 0
    }
    else {
        lines <- system(paste(MAKE, p1(paste("-f", shQuote(makefiles))), 
            "compilers"), intern = TRUE)
        if (with_c) {
            cc <- lines[grep("^CC =", lines)]
            cc <- sub("CC = ", "", cc)
            cc_ver <- try(system(paste(cc, "--version"), intern = TRUE), 
                silent = TRUE)
            if (!inherits(cc_ver, "try-error")) 
                message("using C compiler: ", sQuote(cc_ver[1L]))
        }
        if (with_f77 || with_f9x) {
            fc <- lines[grep("^FC =", lines)]
            fc <- sub("FC = ", "", fc)
            fc_ver <- try(system(paste(fc, "--version"), intern = TRUE), 
                silent = TRUE)
            if (!inherits(fc_ver, "try-error")) 
                message("using Fortran compiler: ", sQuote(fc_ver[1L]))
        }
        if (with_cxx) {
            cxx <- lines[grep("^CXX =", lines)]
            cxx <- sub("CXX = ", "", cxx)
            if (nzchar(cxx)) {
                cxx_ver <- try(system(paste(cxx, "--version"), 
                  intern = TRUE), silent = TRUE)
                if (!inherits(cxx_ver, "try-error")) {
                  message("using C++ compiler: ", sQuote(cxx_ver[1L]))
                  if (!is.null(use_cxxstd)) 
                    message("using C++", use_cxxstd)
                }
            }
        }
        if (Sys.info()["sysname"] == "Darwin" && (with_c || with_f77 || 
            with_f9x || with_cxx)) {
            sdk <- try(system2("xcrun", "--show-sdk-path", TRUE, 
                TRUE), silent = TRUE)
            if (!inherits(sdk, "try-error")) {
                sdk <- Sys.readlink(sdk)
                message("using SDK: ", sQuote(sdk))
            }
        }
        if (preclean) 
            system(paste(cmd, "shlib-clean"))
        res <- system(cmd)
        if ((res == 0L) && build_objects_symbol_tables) {
            system(paste(cmd, "symbols.rds"))
        }
        if (clean) 
            system(paste(cmd, "shlib-clean"))
    }
    res
}
