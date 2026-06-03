#? stdlib
`.install_packages` <- function (args = NULL, no.q = interactive(), warnOption = 1) 
{
    curPkg <- character()
    lockdir <- ""
    is_first_package <- TRUE
    stars <- "*"
    user.tmpdir <- Sys.getenv("PKG_BUILD_DIR")
    keep.tmpdir <- nzchar(user.tmpdir)
    tmpdir <- ""
    clean_on_error <- TRUE
    R_runR_deps_only <- function(cmd, deps_only_env, multiarch = FALSE, 
        ...) {
        deps_only <- config_val_to_logical(Sys.getenv("_R_CHECK_INSTALL_DEPENDS_", 
            "FALSE"))
        env <- if (deps_only) 
            deps_only_env
        else ""
        env <- paste(env, "R_TESTS=")
        opts <- "--no-save --no-restore --no-echo"
        if (deps_only) {
            opts <- paste(opts, "--no-init-file --no-site-file")
            if (!multiarch) 
                opts <- paste(opts, "--no-environ")
        }
        R_runR(cmd = cmd, Ropts = opts, env = env, ...)
    }
    do_exit <- if (no.q) 
        function(status) stop(".install_packages() exit status ", 
            status)
    else function(status) q("no", status = status, runLast = FALSE)
    do_exit_on_error <- function(status = 1L) {
        if (clean_on_error && length(curPkg)) {
            pkgdir <- file.path(lib, curPkg)
            if (nzchar(pkgdir) && dir.exists(pkgdir) && is_subdir(pkgdir, 
                lib)) {
                starsmsg(stars, "removing ", sQuote(pkgdir))
                unlink(pkgdir, recursive = TRUE)
            }
            if (nzchar(lockdir) && dir.exists(lp <- file.path(lockdir, 
                curPkg)) && is_subdir(lp, lockdir)) {
                starsmsg(stars, "restoring previous ", sQuote(pkgdir))
                if (WINDOWS) {
                  file.copy(lp, dirname(pkgdir), recursive = TRUE, 
                    copy.date = TRUE)
                  unlink(lp, recursive = TRUE)
                }
                else {
                  setwd(startdir)
                  if (system(paste("mv -f", shQuote(lp), shQuote(pkgdir)))) 
                    message("  restoration failed\n")
                }
            }
        }
        do_cleanup()
        do_exit(status = status)
    }
    do_cleanup <- function() {
        if (!keep.tmpdir && nzchar(tmpdir)) 
            do_cleanup_tmpdir()
        if (!is_first_package) {
            if (lib == .Library && "html" %in% build_help_types) 
                utils::make.packages.html(.Library, docdir = R.home("doc"))
        }
        if (nzchar(lockdir)) 
            unlink(lockdir, recursive = TRUE)
    }
    do_cleanup_tmpdir <- function() {
        setwd(startdir)
        if (!keep.tmpdir && dir.exists(tmpdir)) 
            unlink(tmpdir, recursive = TRUE)
    }
    quote_path <- function(path, quote = "'") {
        path <- gsub("\\", "\\\\", path, fixed = TRUE)
        path <- gsub(quote, paste0("\\", quote), path, fixed = TRUE)
        paste0(quote, path, quote)
    }
    quote_replacement <- function(r) paste0(gsub("\\", "\\\\", 
        r, fixed = TRUE))
    on.exit(do_exit_on_error())
    WINDOWS <- .Platform$OS.type == "windows"
    cross <- Sys.getenv("R_CROSS_BUILD")
    have_cross <- nzchar(cross)
    if (have_cross && !cross %in% c("x64", "singlearch")) 
        stop("invalid value ", sQuote(cross), " for R_CROSS_BUILD")
    if (have_cross) {
        WINDOWS <- TRUE
        Sys.setenv(R_OSTYPE = "windows")
    }
    if (WINDOWS) 
        MAKE <- "make"
    else MAKE <- Sys.getenv("MAKE")
    rarch <- Sys.getenv("R_ARCH")
    if (WINDOWS && nzchar(.Platform$r_arch)) 
        rarch <- paste0("/", .Platform$r_arch)
    test_archs <- rarch
    if (have_cross) {
        rarch = if (cross == "singlearch") 
            ""
        else paste0("/", cross)
        test_archs <- c()
    }
    SHLIB_EXT <- if (WINDOWS) 
        ".dll"
    else {
        mconf <- file.path(R.home(), paste0("etc", rarch), "Makeconf")
        sub(".*= ", "", grep("^SHLIB_EXT", readLines(mconf), 
            value = TRUE, perl = TRUE))
    }
    if (getOption("warn") < warnOption) {
        op <- options(warn = warnOption)
        on.exit(options(op), add = TRUE)
    }
    invisible(Sys.setlocale("LC_COLLATE", "C"))
    if (WINDOWS) {
        rhome <- chartr("\\", "/", R.home())
        Sys.setenv(R_HOME = rhome)
        if (nzchar(rarch)) 
            Sys.setenv(R_ARCH = rarch, R_ARCH_BIN = rarch)
    }
    Usage <- function() {
        cat("Usage: R CMD INSTALL [options] pkgs", "", "Install the add-on packages specified by pkgs.  The elements of pkgs can", 
            "be relative or absolute paths to directories with the package", 
            "sources, or to gzipped package 'tar' archives.  The library tree", 
            "to install to can be specified via '--library'.  By default, packages are", 
            "installed in the library tree rooted at the first directory in", 
            ".libPaths() for an R session run in the current environment.", 
            "", "Options:", "  -h, --help\t\tprint short help message and exit", 
            "  -v, --version\t\tprint INSTALL version info and exit", 
            "  -c, --clean\t\tremove files created during installation", 
            "      --preclean\tremove files created during a previous run", 
            "  -d, --debug\t\tturn on debugging messages", if (WINDOWS) 
                "\t\t\tand build a debug DLL", "  -l, --library=LIB\tinstall packages to library tree LIB", 
            "      --no-configure    do not use the package's configure script", 
            "      --no-docs\t\tdo not install HTML, LaTeX or examples help", 
            "      --html\t\tbuild HTML help", "      --no-html\t\tdo not build HTML help", 
            "      --latex      \tinstall LaTeX help", "      --example\t\tinstall R code for help examples", 
            "      --fake\t\tdo minimal install for testing purposes", 
            "      --no-lock\t\tinstall on top of any existing installation", 
            "\t\t\twithout using a lock directory", "      --lock\t\tuse a per-library lock directory (default)", 
            "      --pkglock\t\tuse a per-package lock directory", 
            "      \t\t\t(default for a single package)", "      --build    \tbuild binaries of the installed package(s)", 
            "      --install-tests\tinstall package-specific tests (if any)", 
            "      --no-R, --no-libs, --no-data, --no-help, --no-demo, --no-exec,", 
            "      --no-inst", "\t\t\tsuppress installation of the specified part of the", 
            "\t\t\tpackage for testing or other special purposes", 
            "      --no-multiarch\tbuild only the main architecture", 
            "      --libs-only\tonly install the libs directory", 
            "      --data-compress=\tnone, gzip (default), bzip2 or xz compression", 
            "\t\t\tto be used for lazy-loading of data", "      --resave-data\tre-save data files as compactly as possible", 
            "      --compact-docs\tre-compress PDF files under inst/doc", 
            "      --with-keep.source", "      --without-keep.source", 
            "\t\t\tuse (or not) 'keep.source' for R code", "      --with-keep.parse.data", 
            "      --without-keep.parse.data", "\t\t\tuse (or not) 'keep.parse.data' for R code", 
            "      --byte-compile\tbyte-compile R code", "      --no-byte-compile\tdo not byte-compile R code", 
            "      --staged-install\tinstall to a temporary directory and then move", 
            "                   \tto the target directory (default)", 
            "      --no-staged-install\tinstall directly to the target directory", 
            "      --no-test-load\tskip test of loading installed package", 
            "      --no-clean-on-error\tdo not remove installed package on error", 
            "      --merge-multiarch\tmulti-arch by merging (from a single tarball only)", 
            "      --use-vanilla\tdo not read any Renviron or Rprofile files", 
            "      --use-LTO         use Link-Time Optimization", 
            "      --no-use-LTO      do not use Link-Time Optimization", 
            "      --use-C17         use a C standard at most C17 (also C90, C99)", 
            "      --use-C23         use a C standard at least C23", 
            "\nfor Unix", "      --configure-args=ARGS", "\t\t\tset arguments for the configure scripts (if any)", 
            "      --configure-vars=VARS", "\t\t\tset variables for the configure scripts (if any)", 
            "      --strip           strip shared object(s)", 
            "      --strip-lib       strip static/dynamic libraries under lib/", 
            "      --dsym            (macOS only) generate dSYM directory", 
            "      --built-timestamp=STAMP", "                   set timestamp for Built: entry in DESCRIPTION", 
            "", "Which of --html or --no-html is the default depends on the build of R:", 
            paste0("for this one it is ", if (static_html) 
                "--html"
            else "--no-html", "."), "", "Report bugs at <https://bugs.R-project.org>.", 
            sep = "\n")
    }
    is_subdir <- function(dir, parent) {
        rl <- Sys.readlink(dir)
        (!is.na(rl) && nzchar(rl)) || normalizePath(parent) == 
            normalizePath(file.path(dir, ".."))
    }
    fullpath <- function(dir) {
        owd <- setwd(dir)
        full <- getwd()
        setwd(owd)
        full
    }
    parse_description_field <- function(desc, field, default) str_parse_logic(desc[field], 
        default = default, otherwise = quote(errmsg("invalid value of ", 
            field, " field in DESCRIPTION")))
    starsmsg <- function(stars, ...) message(stars, " ", ..., 
        domain = NA)
    errmsg <- function(...) {
        message("ERROR: ", ..., domain = NA)
        do_exit_on_error()
    }
    pkgerrmsg <- function(msg, pkg) errmsg(msg, " for package ", 
        sQuote(pkg))
    do_install <- function(pkg) {
        if (WINDOWS && endsWith(pkg, ".zip")) {
            pkg_name <- basename(pkg)
            pkg_name <- sub("\\.zip$", "", pkg_name)
            pkg_name <- sub("_[0-9.-]+$", "", pkg_name)
            reuse_lockdir <- lock && !pkglock
            if (pkglock) 
                lock <- "pkglock"
            utils:::unpackPkgZip(pkg, pkg_name, lib, libs_only, 
                lock, reuse_lockdir = reuse_lockdir)
            return()
        }
        setwd(pkg)
        desc <- tryCatch(read.dcf(fd <- file.path(pkg, "DESCRIPTION")), 
            error = identity)
        if (inherits(desc, "error") || !length(desc)) 
            stop(gettextf("error reading file '%s'", fd), domain = NA, 
                call. = FALSE)
        desc <- desc[1L, ]
        if (!is.na(desc["Bundle"])) {
            stop("this seems to be a bundle -- and they are defunct")
        }
        else {
            pkg_name <- desc["Package"]
            if (is.na(pkg_name)) 
                errmsg("no 'Package' field in 'DESCRIPTION'")
            curPkg <<- pkg_name
        }
        instdir <- file.path(lib, pkg_name)
        Sys.setenv(R_PACKAGE_NAME = pkg_name, R_PACKAGE_DIR = instdir)
        status <- .Rtest_package_depends_R_version()
        if (status) 
            do_exit_on_error()
        dir.create(instdir, recursive = TRUE, showWarnings = FALSE)
        if (!dir.exists(instdir)) {
            unlink(instdir, recursive = FALSE)
            dir.create(instdir, recursive = TRUE, showWarnings = FALSE)
        }
        if (!dir.exists(instdir)) {
            message("ERROR: unable to create ", sQuote(instdir), 
                domain = NA)
            do_exit_on_error()
        }
        if (!is_subdir(instdir, lib)) {
            message("ERROR: ", sQuote(pkg_name), " is not a legal package name", 
                domain = NA)
            do_exit_on_error()
        }
        owd <- setwd(instdir)
        if (owd == getwd()) 
            pkgerrmsg("cannot install to srcdir", pkg_name)
        setwd(owd)
        is_source_package <- is.na(desc["Built"])
        if (is_source_package) {
            sys_requires <- desc["SystemRequirements"]
            if (!is.na(sys_requires)) {
                sys_requires <- unlist(strsplit(sys_requires, 
                  ","))
                for (i in cxx_standards) {
                  pattern <- paste0("^[[:space:]]*C[+][+]", i, 
                    "[[:space:]]*$")
                  if (any(grepl(pattern, sys_requires, ignore.case = TRUE))) {
                    Sys.setenv(R_PKG_CXX_STD = i)
                    on.exit(Sys.unsetenv("R_PKG_CXX_STD"))
                    break
                  }
                }
                if (is.na(use_C)) {
                  if (any(grepl("USE_C17", sys_requires))) 
                    use_C <<- 17
                  if (any(grepl("USE_C23", sys_requires))) 
                    use_C <<- 23
                  if (any(grepl("USE_C90", sys_requires))) 
                    use_C <<- 90
                  if (any(grepl("USE_C99", sys_requires))) 
                    use_C <<- 99
                }
            }
        }
        if (!is_first_package) 
            cat("\n")
        if (is_source_package) 
            do_install_source(pkg_name, instdir, pkg, desc)
        else do_install_binary(pkg_name, instdir, desc)
        .Call(C_dirchmod, instdir, group.writable)
        is_first_package <<- FALSE
        if (tar_up) {
            starsmsg(stars, "creating tarball")
            version <- desc["Version"]
            filename <- if (!grepl("darwin", R.version$os)) {
                paste0(pkg_name, "_", version, "_R_", Sys.getenv("R_PLATFORM"), 
                  ".tar.gz")
            }
            else {
                paste0(pkg_name, "_", version, ".tgz")
            }
            filepath <- file.path(startdir, filename)
            owd <- setwd(lib)
            res <- utils::tar(filepath, curPkg, compression = "gzip", 
                compression_level = 9L, tar = Sys.getenv("R_INSTALL_TAR"))
            if (res) 
                errmsg(sprintf("packaging into %s failed", sQuote(filename)))
            message("packaged installation of ", sQuote(pkg_name), 
                " as ", sQuote(filename), domain = NA)
            setwd(owd)
        }
        if (zip_up) {
            starsmsg(stars, "MD5 sums")
            .installMD5sums(instdir)
            ZIP <- "zip"
            version <- desc["Version"]
            filename <- paste0(pkg_name, "_", version, ".zip")
            filepath <- shQuote(file.path(startdir, filename))
            unlink(filepath)
            owd <- setwd(lib)
            res <- system(paste(shQuote(ZIP), "-r9Xq", filepath, 
                paste(curPkg, collapse = " ")))
            setwd(owd)
            if (res) 
                message("running 'zip' failed", domain = NA)
            else message("packaged installation of ", sQuote(pkg_name), 
                " as ", filename, domain = NA)
        }
        if (Sys.getenv("_R_INSTALL_NO_DONE_") != "yes") {
            starsmsg(stars, "DONE (", pkg_name, ")")
        }
        curPkg <<- character()
    }
    do_install_binary <- function(pkg, instdir, desc) {
        starsmsg(stars, "installing *binary* package ", sQuote(pkg), 
            " ...")
        if (file.exists(file.path(instdir, "DESCRIPTION"))) {
            if (nzchar(lockdir)) 
                system(paste("mv -f", shQuote(instdir), shQuote(file.path(lockdir, 
                  pkg))))
            dir.create(instdir, recursive = TRUE, showWarnings = FALSE)
        }
        TAR <- Sys.getenv("TAR", "tar")
        res <- system(paste("cp -R .", shQuote(instdir), "|| (", 
            TAR, "cd - .| (cd", shQuote(instdir), "&&", TAR, 
            "-xf -))"))
        if (res) 
            errmsg("installing binary package failed")
        if (tar_up) {
            starsmsg(stars, sQuote(pkg), " was already a binary package and will not be rebuilt")
            tar_up <- FALSE
        }
    }
    run_clean <- function() {
        if (dir.exists("src") && length(dir("src", all.files = TRUE)) > 
            2L) {
            if (WINDOWS) 
                archs <- c("i386", "x64")
            else {
                wd2 <- setwd(file.path(R.home("bin"), "exec"))
                archs <- Sys.glob("*")
                setwd(wd2)
            }
            if (length(archs)) 
                for (arch in archs) {
                  ss <- paste0("src-", arch)
                  .Call(C_dirchmod, ss, group.writable)
                  unlink(ss, recursive = TRUE)
                }
            owd <- setwd("src")
            if (WINDOWS) {
                if (file.exists("Makefile.ucrt")) 
                  system(paste(MAKE, "-f Makefile.ucrt clean"))
                else if (file.exists("Makefile.win")) 
                  system(paste(MAKE, "-f Makefile.win clean"))
                else unlink(c("Makedeps", Sys.glob("*_res.rc"), 
                  Sys.glob("*.[do]")))
            }
            else {
                if (file.exists("Makefile")) 
                  system(paste(MAKE, "clean"))
                else unlink(Sys.glob(paste0("*", SHLIB_EXT)))
            }
            setwd(owd)
        }
        if (WINDOWS) {
            if (file.exists("cleanup.ucrt")) 
                system("sh ./cleanup.ucrt")
            else if (file.exists("cleanup.win")) 
                system("sh ./cleanup.win")
        }
        else if (file_test("-x", "cleanup")) 
            system("./cleanup")
        else if (file.exists("cleanup")) 
            warning("'cleanup' exists but is not executable -- see the 'R Installation and Administration Manual'", 
                call. = FALSE)
        revert_install_time_patches()
    }
    do_install_source <- function(pkg_name, instdir, pkg_dir, 
        desc) {
        Sys.setenv(R_INSTALL_PKG = pkg_name)
        on.exit(Sys.unsetenv("R_INSTALL_PKG"))
        shlib_install <- function(instdir, arch) {
            if (file.exists("install.libs.R")) {
                message("installing via 'install.libs.R' to ", 
                  instdir, domain = NA)
                local.env <- local({
                  SHLIB_EXT <- SHLIB_EXT
                  R_PACKAGE_DIR <- instdir
                  R_PACKAGE_NAME <- pkg_name
                  R_PACKAGE_SOURCE <- pkg_dir
                  R_ARCH <- arch
                  WINDOWS <- WINDOWS
                  environment()
                })
                parent.env(local.env) <- .GlobalEnv
                source("install.libs.R", local = local.env)
                return(TRUE)
            }
            files <- Sys.glob(paste0("*", SHLIB_EXT))
            if (length(files)) {
                libarch <- if (nzchar(arch)) 
                  paste0("libs", arch)
                else "libs"
                dest <- file.path(instdir, libarch)
                message("installing to ", dest, domain = NA)
                dir.create(dest, recursive = TRUE, showWarnings = FALSE)
                file.copy(files, dest, overwrite = TRUE)
                if ((do_strip || config_val_to_logical(Sys.getenv("_R_SHLIB_STRIP_", 
                  "false"))) && nzchar(strip_cmd <- Sys.getenv("R_STRIP_SHARED_LIB"))) {
                  system(paste(c(strip_cmd, shQuote(file.path(dest, 
                    files))), collapse = " "))
                }
                if (!WINDOWS) 
                  Sys.chmod(file.path(dest, files), dmode)
                if (dsym && startsWith(R.version$os, "darwin")) {
                  starsmsg(stars, gettextf("generating debug symbols (%s)", 
                    "dSYM"))
                  dylib <- Sys.glob(paste0(dest, "/*", SHLIB_EXT))
                  for (d in dylib) system(paste0("dsymutil ", 
                    d))
                }
                if (config_val_to_logical(Sys.getenv("_R_SHLIB_BUILD_OBJECTS_SYMBOL_TABLES_", 
                  "TRUE")) && file_test("-f", "symbols.rds")) {
                  file.copy("symbols.rds", dest)
                }
            }
        }
        run_shlib <- function(pkg_name, srcs, instdir, arch, 
            use_LTO = NA) {
            args <- c(shargs, if (isTRUE(use_LTO)) "--use-LTO", 
                if (isFALSE(use_LTO)) "--no-use-LTO", if (isTRUE(use_C == 
                  "17")) "--use-C17" else if (isTRUE(use_C == 
                  "23")) "--use-C23" else if (isTRUE(use_C == 
                  "90")) "--use-C90" else if (isTRUE(use_C == 
                  "99")) "--use-C99", "-o", paste0(pkg_name, 
                  SHLIB_EXT), srcs)
            if (WINDOWS && debug) 
                args <- c(args, "--debug")
            if (debug) 
                message("about to run ", "R CMD SHLIB ", paste(args, 
                  collapse = " "), domain = NA)
            if (.shlib_internal(args) == 0L) {
                if (WINDOWS && !file.exists("install.libs.R") && 
                  !length(Sys.glob("*.dll"))) {
                  message("no DLL was created")
                  return(TRUE)
                }
                shlib_install(instdir, arch)
                return(FALSE)
            }
            else return(TRUE)
        }
        patch_rpaths <- function() {
            slibs <- list.files(instdir, recursive = TRUE, all.files = TRUE, 
                full.names = TRUE)
            slibs <- grep("(\\.sl$)|(\\.so$)|(\\.dylib$)|(\\.dll$)", 
                slibs, value = TRUE)
            if (!length(slibs)) 
                return()
            have_file <- nzchar(Sys.which("file"))
            if (have_file) {
                are_shared <- vapply(slibs, function(l) any(grepl("(shared|dynamically linked)", 
                  system(paste("file", shQuote(l)), intern = TRUE))), 
                  NA)
                slibs <- slibs[are_shared]
                if (!length(slibs)) 
                  return()
            }
            starsmsg(stars, "checking absolute paths in shared objects and dynamic libraries")
            uname <- system("uname -a", intern = TRUE)
            os <- sub(" .*", "", uname)
            have_chrpath <- nzchar(Sys.which("chrpath"))
            have_patchelf <- nzchar(Sys.which("patchelf"))
            have_readelf <- nzchar(Sys.which("readelf"))
            have_macos_clt <- identical(os, "Darwin") && nzchar(Sys.which("otool")) && 
                nzchar(Sys.which("install_name_tool"))
            have_solaris_elfedit <- identical(os, "SunOS") && 
                nzchar(Sys.which("elfedit"))
            hardcoded_paths <- FALSE
            failed_fix <- FALSE
            if (have_solaris_elfedit) {
                for (l in slibs) {
                  out <- suppressWarnings(system(paste("elfedit -re dyn:value", 
                    shQuote(l)), intern = TRUE))
                  out <- grep("^[ \t]*\\[[0-9]+\\]", out, value = TRUE)
                  re <- "^[ \t]*\\[([0-9]+)\\][ \t]+([^ \t]+)[ \t]+([^ \t]+)[ \t]*(.*)"
                  paths <- gsub(re, "\\4", out)
                  idxs <- gsub(re, "\\1", out)
                  old_paths <- paths
                  paths <- gsub(instdir, quote_replacement(final_instdir), 
                    paths, fixed = TRUE)
                  changed <- paths != old_paths
                  paths <- paths[changed]
                  old_paths <- old_paths[changed]
                  idxs <- idxs[changed]
                  for (i in seq_along(paths)) {
                    hardcoded_paths <- TRUE
                    qp <- gsub("([\" \\])", "\\\\\\1", paths[i])
                    qp <- gsub("'", "\\\\'", qp)
                    cmd <- paste0("elfedit -e \"dyn:value -dynndx -s ", 
                      idxs[i], " ", qp, "\" ", shQuote(l))
                    message(cmd)
                    ret <- suppressWarnings(system(cmd, intern = FALSE))
                    if (ret == 0) 
                      message("NOTE: fixed path ", sQuote(old_paths[i]))
                  }
                  out <- suppressWarnings(system(paste("elfedit -re dyn:value", 
                    shQuote(l)), intern = TRUE))
                  out <- grep("^[ \t]*\\[", out, value = TRUE)
                  paths <- gsub(re, "\\4", out)
                  if (any(grepl(instdir, paths, fixed = TRUE))) 
                    failed_fix <- TRUE
                }
            }
            else if (have_macos_clt) {
                for (l in slibs) {
                  out <- suppressWarnings(system(paste("otool -D", 
                    shQuote(l)), intern = TRUE))
                  out <- out[-1L]
                  oldid <- out
                  if (length(oldid) == 1 && grepl(instdir, oldid, 
                    fixed = TRUE)) {
                    hardcoded_paths <- TRUE
                    newid <- gsub(instdir, quote_replacement(final_instdir), 
                      oldid, fixed = TRUE)
                    cmd <- paste("install_name_tool -id", shQuote(newid), 
                      shQuote(l))
                    message(cmd)
                    ret <- suppressWarnings(system(cmd, intern = FALSE))
                    if (ret == 0) 
                      message("NOTE: fixed library identification name ", 
                        sQuote(oldid))
                  }
                  out <- suppressWarnings(system(paste("otool -L", 
                    shQuote(l)), intern = TRUE))
                  paths <- grep("\\(compatibility", out, value = TRUE)
                  paths <- gsub("^[ \t]*(.*) \\(compatibility.*", 
                    "\\1", paths)
                  old_paths <- paths
                  paths <- gsub(instdir, quote_replacement(final_instdir), 
                    paths, fixed = TRUE)
                  changed <- paths != old_paths
                  paths <- paths[changed]
                  old_paths <- old_paths[changed]
                  for (i in seq_along(paths)) {
                    hardcoded_paths <- TRUE
                    cmd <- paste("install_name_tool -change", 
                      shQuote(old_paths[i]), shQuote(paths[i]), 
                      shQuote(l))
                    message(cmd)
                    ret <- suppressWarnings(system(cmd, intern = FALSE))
                    if (ret == 0) 
                      message("NOTE: fixed library path ", sQuote(old_paths[i]))
                  }
                  out <- suppressWarnings(system(paste("otool -L", 
                    shQuote(l)), intern = TRUE))
                  out <- grep("\\(compatibility", out, value = TRUE)
                  if (any(grepl(instdir, out, fixed = TRUE))) 
                    failed_fix <- TRUE
                  out <- suppressWarnings(system(paste("otool -l", 
                    shQuote(l)), intern = TRUE))
                  out <- grep("(^[ \t]*cmd )|(^[ \t]*path )", 
                    out, value = TRUE)
                  rpidx <- grep("cmd LC_RPATH$", out)
                  if (length(rpidx)) {
                    paths <- gsub("^[ \t]*path ", "", out[rpidx + 
                      1])
                    paths <- gsub("(.*) \\(offset .*", "\\1", 
                      paths)
                    old_paths <- paths
                    paths <- gsub(instdir, quote_replacement(final_instdir), 
                      paths, fixed = TRUE)
                    changed <- paths != old_paths
                    paths <- paths[changed]
                    old_paths <- old_paths[changed]
                    for (i in seq_along(paths)) {
                      hardcoded_paths <- TRUE
                      cmd <- paste("install_name_tool -rpath", 
                        shQuote(old_paths[i]), shQuote(paths[i]), 
                        shQuote(l))
                      message(cmd)
                      ret <- suppressWarnings(system(cmd))
                      if (ret == 0) 
                        message("NOTE: fixed rpath ", sQuote(old_paths[i]))
                    }
                  }
                  out <- suppressWarnings(system(paste("otool -l", 
                    shQuote(l)), intern = TRUE))
                  out <- out[-1L]
                  if (any(grepl(instdir, out, fixed = TRUE))) 
                    failed_fix <- TRUE
                }
            }
            else if (have_patchelf) {
                for (l in slibs) {
                  rpath <- suppressWarnings(system(paste("patchelf --print-rpath", 
                    shQuote(l)), intern = TRUE))
                  old_rpath <- rpath
                  rpath <- gsub(instdir, quote_replacement(final_instdir), 
                    rpath, fixed = TRUE)
                  if (length(rpath) && nzchar(rpath) && old_rpath != 
                    rpath) {
                    hardcoded_paths <- TRUE
                    cmd <- paste("patchelf", "--set-rpath", shQuote(rpath), 
                      shQuote(l))
                    message(cmd)
                    ret <- suppressWarnings(system(cmd))
                    if (ret == 0) 
                      message("NOTE: fixed rpath ", sQuote(old_rpath))
                    rpath <- suppressWarnings(system(paste("patchelf --print-rpath", 
                      shQuote(l)), intern = TRUE))
                    if (any(grepl(instdir, rpath, fixed = TRUE))) 
                      failed_fix <- TRUE
                  }
                  if (have_readelf) {
                    out <- suppressWarnings(system(paste("readelf -d", 
                      shQuote(l)), intern = TRUE))
                    re0 <- "0x.*\\(NEEDED\\).*Shared library:"
                    out <- grep(re0, out, value = TRUE)
                    re <- "^[ \t]*0x[0-9]+[ \t]+\\(NEEDED\\)[ \t]+Shared library:[ \t]*\\[(.*)\\]"
                    paths <- gsub(re, "\\1", out)
                    old_paths <- paths
                    paths <- gsub(instdir, quote_replacement(final_instdir), 
                      paths, fixed = TRUE)
                    changed <- paths != old_paths
                    paths <- paths[changed]
                    old_paths <- old_paths[changed]
                    for (i in seq_along(paths)) {
                      cmd <- paste("patchelf --replace-needed", 
                        shQuote(old_paths[i]), shQuote(paths[i]), 
                        shQuote(l))
                      message(cmd)
                      ret <- suppressWarnings(system(cmd))
                      if (ret == 0) 
                        message("NOTE: fixed library path ", 
                          sQuote(old_paths[i]))
                    }
                    out <- suppressWarnings(system(paste("readelf -d", 
                      shQuote(l)), intern = TRUE))
                    out <- grep(re0, out, value = TRUE)
                    if (any(grepl(instdir, out, fixed = TRUE))) 
                      failed_fix <- TRUE
                  }
                }
            }
            else if (have_chrpath) {
                for (l in slibs) {
                  out <- suppressWarnings(system(paste("chrpath", 
                    shQuote(l)), intern = TRUE))
                  rpath <- grep(".*PATH=", out, value = TRUE)
                  rpath <- gsub(".*PATH=", "", rpath)
                  old_rpath <- rpath
                  rpath <- gsub(instdir, quote_replacement(final_instdir), 
                    rpath, fixed = TRUE)
                  if (length(rpath) && nzchar(rpath) && old_rpath != 
                    rpath) {
                    hardcoded_paths <- TRUE
                    cmd <- paste("chrpath", "-r", shQuote(rpath), 
                      shQuote(l))
                    message(cmd)
                    ret <- suppressWarnings(system(cmd))
                    if (ret == 0) 
                      message("NOTE: fixed rpath ", sQuote(old_rpath))
                    out <- suppressWarnings(system(paste("chrpath", 
                      shQuote(l)), intern = TRUE))
                    rpath <- grep(".*PATH=", out, value = TRUE)
                    rpath <- gsub(".*PATH=", "", rpath)
                    if (any(grepl(instdir, rpath, fixed = TRUE))) 
                      failed_fix <- TRUE
                  }
                }
            }
            if (hardcoded_paths) 
                message("WARNING: shared objects/dynamic libraries with hard-coded temporary installation paths")
            if (failed_fix) 
                errmsg("some hard-coded temporary paths could not be fixed")
            if (have_readelf) {
                for (l in slibs) {
                  out <- suppressWarnings(system(paste("readelf -d", 
                    shQuote(l)), intern = TRUE))
                  out <- grep("^[ \t]*0x", out, value = TRUE)
                  if (any(grepl(instdir, out, fixed = TRUE))) {
                    ll <- sub(file.path(instdir, ""), "", l, 
                      fixed = TRUE)
                    errmsg("absolute paths in ", sQuote(ll), 
                      " include the temporary installation directory:", 
                      " please report to the package maintainer", 
                      " and use ", sQuote("--no-staged-install"))
                  }
                }
            }
        }
        Sys.setenv(R_LIBRARY_DIR = lib)
        if (nzchar(lib0)) {
            rlibs <- Sys.getenv("R_LIBS")
            rlibs <- if (nzchar(rlibs)) 
                paste(lib, rlibs, sep = .Platform$path.sep)
            else lib
            Sys.setenv(R_LIBS = rlibs)
            .libPaths(c(lib, .libPaths()))
        }
        Type <- desc["Type"]
        if (!is.na(Type) && Type == "Frontend") {
            if (WINDOWS) 
                errmsg("'Frontend' packages are Unix-only")
            starsmsg(stars, "installing *Frontend* package ", 
                sQuote(pkg_name), " ...")
            if (preclean) 
                system(paste(MAKE, "clean"))
            if (use_configure) {
                if (file_test("-x", "configure")) {
                  res <- system(paste(paste(configure_vars, collapse = " "), 
                    "./configure", paste(configure_args, collapse = " ")))
                  if (res) 
                    pkgerrmsg("configuration failed", pkg_name)
                }
                else if (file.exists("configure")) 
                  errmsg("'configure' exists but is not executable -- see the 'R Installation and Administration Manual'")
            }
            if (file.exists("Makefile")) 
                if (system(MAKE)) 
                  pkgerrmsg("make failed", pkg_name)
            if (clean) 
                system(paste(MAKE, "clean"))
            return()
        }
        if (!is.na(Type) && Type == "Translation") 
            errmsg("'Translation' packages are defunct")
        OS_type <- desc["OS_type"]
        if (WINDOWS) {
            if ((!is.na(OS_type) && OS_type == "unix") && !fake) 
                errmsg(" Unix-only package")
        }
        else {
            if ((!is.na(OS_type) && OS_type == "windows") && 
                !fake) 
                errmsg(" Windows-only package")
        }
        if (group.writable) {
            fmode <- "664"
            dmode <- "775"
        }
        else {
            fmode <- "644"
            dmode <- "755"
        }
        pkgInfo <- .split_description(.read_description("DESCRIPTION"))
        R_install_force_depends_imports <- config_val_to_logical(Sys.getenv("_R_INSTALL_LIBS_ONLY_FORCE_DEPENDS_IMPORTS_", 
            "TRUE"))
        if (libs_only && isFALSE(R_install_force_depends_imports)) 
            pkgs <- unique(c(names(names(pkgInfo$LinkingTo))))
        else pkgs <- unique(c(names(pkgInfo$Depends), names(pkgInfo$Imports), 
            names(pkgInfo$LinkingTo)))
        if (length(pkgs)) {
            miss <- character()
            for (pkg in pkgs) {
                if (!length(find.package(pkg, quiet = TRUE))) 
                  miss <- c(miss, pkg)
            }
            if (length(miss) > 1) 
                pkgerrmsg(sprintf("dependencies %s are not available", 
                  paste(sQuote(miss), collapse = ", ")), pkg_name)
            else if (length(miss)) 
                pkgerrmsg(sprintf("dependency %s is not available", 
                  sQuote(miss)), pkg_name)
        }
        starsmsg(stars, "installing *source* package ", sQuote(pkg_name), 
            " ...")
        stars <- "**"
        res <- checkMD5sums(pkg_name, getwd())
        if (!is.na(res) && res) {
            starsmsg(stars, gettextf("package %s successfully unpacked and MD5 sums checked", 
                sQuote(pkg_name)))
        }
        if (file.exists(file.path(instdir, "DESCRIPTION"))) {
            if (nzchar(lockdir)) {
                if (debug) 
                  starsmsg(stars, "backing up earlier installation")
                if (WINDOWS) {
                  file.copy(instdir, lockdir, recursive = TRUE, 
                    copy.date = TRUE)
                  if (more_than_libs) 
                    unlink(instdir, recursive = TRUE)
                }
                else if (more_than_libs) 
                  system(paste("mv -f ", shQuote(instdir), shQuote(file.path(lockdir, 
                    pkg_name))))
                else file.copy(instdir, lockdir, recursive = TRUE, 
                  copy.date = TRUE)
            }
            else if (more_than_libs) 
                unlink(instdir, recursive = TRUE)
            if (more_than_libs && dir.exists(instdir)) 
                errmsg("cannot remove earlier installation, is it in use?")
            dir.create(instdir, recursive = TRUE, showWarnings = FALSE)
        }
        pkg_staged_install <- SI <- parse_description_field(desc, 
            "StagedInstall", default = NA)
        if (is.na(pkg_staged_install)) 
            pkg_staged_install <- staged_install
        if (have_cross) 
            pkg_staged_install <- FALSE
        if (pkg_staged_install && libs_only) {
            pkg_staged_install <- FALSE
            message("not using staged install with --libs-only")
        }
        if (pkg_staged_install && !lock) {
            pkg_staged_install <- FALSE
            message("staged installation is only possible with locking")
        }
        if (pkg_staged_install) {
            starsmsg(stars, "using staged installation")
            final_instdir <- instdir
            final_lib <- lib
            final_rpackagedir <- Sys.getenv("R_PACKAGE_DIR")
            final_rlibs <- Sys.getenv("R_LIBS")
            final_libpaths <- .libPaths()
            instdir <- file.path(lockdir, "00new", pkg_name)
            Sys.setenv(R_PACKAGE_DIR = instdir)
            dir.create(instdir, recursive = TRUE, showWarnings = FALSE)
            lib <- file.path(lockdir, "00new")
            rlibs <- if (nzchar(final_rlibs)) 
                paste(lib, final_rlibs, sep = .Platform$path.sep)
            else lib
            Sys.setenv(R_LIBS = rlibs)
            .libPaths(c(lib, final_libpaths))
        }
        else {
            if (isFALSE(SI)) 
                starsmsg(stars, "using non-staged installation via StagedInstall field")
            else if (Sys.getenv("_R_INSTALL_SUPPRESS_NO_STAGED_MESSAGE_") != 
                "yes") 
                starsmsg(stars, "using non-staged installation")
        }
        if (preclean) 
            run_clean()
        if (WINDOWS) {
            it_patches_base <- Sys.getenv("_R_INSTALL_TIME_PATCHES_", 
                "no")
            if (!it_patches_base %in% c("no", "disabled", "false", 
                "FALSE")) {
                patches_idx <- tryCatch({
                  idxfile <- file(paste0(it_patches_base, "/", 
                    "patches_idx.rds"))
                  patches_idx <- readRDS(idxfile)
                  close(idxfile)
                  patches_idx
                }, error = function(e) NULL)
                if (is.null(patches_idx)) 
                  message("WARNING: installation-time patches will not be applied, could not get the patches index")
                else {
                  patches_msg <- FALSE
                  for (p in patches_idx[[pkg_name]]) {
                    if (!patches_msg) {
                      patches_msg <- TRUE
                      starsmsg(stars, "applying installation-time patches")
                    }
                    purl <- paste0(it_patches_base, "/", p)
                    have_patch <- nzchar(Sys.which("patch"))
                    if (!have_patch) 
                      stop("patch utility is needed for installation-time patching")
                    dir.create("install_time_patches", recursive = TRUE)
                    fname <- paste0("install_time_patches/", 
                      basename(p))
                    if (grepl("^http", purl)) 
                      utils::download.file(purl, destfile = fname, 
                        mode = "wb")
                    else file.copy(purl, fname)
                    if (system2("patch", args = c("--dry-run", 
                      "-p2", "--binary", "--force"), stdin = fname, 
                      stdout = NULL, stderr = NULL) != 0) {
                      if (system2("patch", args = c("--dry-run", 
                        "-R", "-p2", "--binary", "--force"), 
                        stdin = fname) == 0) 
                        message("NOTE: Skipping installation-time patch ", 
                          purl, " which seems to be already applied.\n")
                      else message("WARNING: failed to apply patch ", 
                        purl, "\n")
                    }
                    else {
                      if (system2("patch", args = c("-p2", "--binary", 
                        "--force"), stdin = fname) != 0) 
                        message("WARNING: failed to apply patch ", 
                          p, "\n")
                      else message("Applied installation-time patch ", 
                        purl, " and saved it as ", fname, " in package installation\n")
                    }
                  }
                }
            }
        }
        if (use_configure) {
            if (WINDOWS) {
                if (file.exists(f <- "./configure.ucrt") || file.exists(f <- "./configure.win")) {
                  ev <- c("CC", "CFLAGS", "CXX", "CXXFLAGS", 
                    "CPPFLAGS", "LDFLAGS", "FC", "FCFLAGS")
                  ev <- ev[!nzchar(Sys.getenv(ev))]
                  ev1 <- ev
                  if (!is.na(use_C)) 
                    ev1 <- c(sprintf(c("CC%s", "C%sFLAGS"), use_C), 
                      ev[!(ev %in% c("CC", "CFLAGS"))])
                  ev2 <- lapply(ev1, function(x) system2(file.path(R.home("bin"), 
                    "Rcmd.exe"), c("config", x), stdout = TRUE))
                  names(ev2) <- ev1
                  do.call(Sys.setenv, ev2)
                  res <- system(paste("sh", f))
                  Sys.unsetenv(ev2)
                  if (res) 
                    pkgerrmsg("configuration failed", pkg_name)
                }
                else if (file.exists("configure")) 
                  message("\n", "   **********************************************\n", 
                    "   WARNING: this package has a configure script\n", 
                    "         It probably needs manual configuration\n", 
                    "   **********************************************\n\n", 
                    domain = NA)
            }
            else {
                if (file_test("-x", "configure")) {
                  cmd <- paste(paste(configure_vars, collapse = " "), 
                    "./configure", paste(configure_args, collapse = " "))
                  if (debug) 
                    message("configure command: ", sQuote(cmd), 
                      domain = NA)
                  cmd <- paste("_R_SHLIB_BUILD_OBJECTS_SYMBOL_TABLES_=false", 
                    cmd)
                  ev <- c("CC", "CFLAGS", "CXX", "CXXFLAGS", 
                    "CPPFLAGS", "LDFLAGS", "FC", "FCFLAGS")
                  ev <- ev[!nzchar(Sys.getenv(ev))]
                  ev1 <- ev
                  if (!is.na(use_C)) 
                    ev1 <- c(sprintf(c("CC%s", "C%sFLAGS"), use_C), 
                      ev[-(1:2)])
                  ev2 <- sapply(ev1, function(x) system2(file.path(R.home("bin"), 
                    "R"), c("CMD", "config", x), stdout = TRUE))
                  ev3 <- paste0(ev, "=", shQuote(ev2))
                  ev3 <- ev3[nzchar(ev2)]
                  cmd <- paste(c(ev3, cmd), collapse = " ")
                  res <- system(cmd)
                  if (res) 
                    pkgerrmsg("configuration failed", pkg_name)
                }
                else if (file.exists("configure")) 
                  errmsg("'configure' exists but is not executable -- see the 'R Installation and Administration Manual'")
            }
        }
        if (more_than_libs) {
            for (f in c("NAMESPACE", "LICENSE", "LICENCE", "NEWS", 
                "NEWS.md")) if (file.exists(f)) {
                file.copy(f, instdir, TRUE)
                Sys.chmod(file.path(instdir, f), fmode)
            }
            res <- try(.install_package_description(".", instdir, 
                built_stamp))
            if (inherits(res, "try-error")) 
                pkgerrmsg("installing package DESCRIPTION failed", 
                  pkg_name)
            if (!file.exists(namespace <- file.path(instdir, 
                "NAMESPACE"))) {
                if (dir.exists("R")) 
                  errmsg("a 'NAMESPACE' file is required")
                else writeLines("## package without R code", 
                  namespace)
            }
        }
        if (install_libs && dir.exists("src") && length(dir("src", 
            all.files = TRUE)) > 2L) {
            starsmsg(stars, "libs")
            if (!file.exists(file.path(R.home("include"), "R.h"))) 
                warning("R include directory is empty -- perhaps need to install R-devel.rpm or similar", 
                  call. = FALSE)
            has_error <- FALSE
            linkTo <- pkgInfo$LinkingTo
            if (!is.null(linkTo)) {
                lpkgs <- sapply(linkTo, function(x) x[[1L]])
                paths <- find.package(lpkgs, quiet = TRUE)
                bpaths <- basename(paths)
                if (length(paths)) {
                  have_vers <- (lengths(linkTo) > 1L) & lpkgs %in% 
                    bpaths
                  for (z in linkTo[have_vers]) {
                    p <- z[[1L]]
                    path <- paths[bpaths %in% p]
                    current <- readRDS(file.path(path, "Meta", 
                      "package.rds"))$DESCRIPTION["Version"]
                    target <- as.numeric_version(z$version)
                    if (!do.call(z$op, list(as.numeric_version(current), 
                      target))) 
                      stop(gettextf("package %s %s was found, but %s %s is required by %s", 
                        sQuote(p), current, z$op, target, sQuote(pkgname)), 
                        call. = FALSE, domain = NA)
                  }
                  clink_cppflags <- paste(paste0("-I'", paths, 
                    "/include'"), collapse = " ")
                  Sys.setenv(CLINK_CPPFLAGS = clink_cppflags)
                }
            }
            else clink_cppflags <- ""
            libdir <- file.path(instdir, paste0("libs", rarch))
            dir.create(libdir, showWarnings = FALSE)
            if (WINDOWS) {
                owd <- setwd("src")
                if (file.exists(f <- "Makefile.ucrt") || file.exists(f <- "Makefile.win")) {
                  system_makefile <- file.path(R.home(), paste0("etc", 
                    rarch), "Makeconf")
                  makefiles <- c(system_makefile, makevars_site(), 
                    f, makevars_user())
                  message(paste0("  running 'src/", f, "' ..."), 
                    domain = NA)
                  p1 <- function(...) paste(..., collapse = " ")
                  makeargs <- if (!is.na(use_C)) 
                    sprintf(c("CC='$(CC%s)'", "CFLAGS='$(C%sFLAGS)'"), 
                      use_C)
                  else character()
                  cmd <- paste("make --no-print-directory", p1("-f", 
                    shQuote(makefiles)), p1(makeargs))
                  res <- system(cmd)
                  if (res == 0L) 
                    shlib_install(instdir, rarch)
                  else has_error <- TRUE
                }
                else {
                  srcs <- dir(pattern = "\\.([cfmM]|cc|cpp|f90|f95|mm)$", 
                    all.files = TRUE)
                  archs <- if (have_cross) {
                    if (cross == "singlearch") 
                      ""
                    else cross
                  }
                  else {
                    f <- dir(file.path(R.home(), "bin"))
                    f[f %in% c("i386", "x64")]
                  }
                  one_only <- !multiarch
                  has_configure_ucrt <- file.exists("../configure.ucrt")
                  if (!one_only && (has_configure_ucrt || file.exists("../configure.win"))) {
                    one_only <- sum(nchar(readLines(if (has_configure_ucrt) "../configure.ucrt" else "../configure.win", 
                      warn = FALSE), "bytes")) > 0
                    if (one_only && !force_biarch) {
                      if (parse_description_field(desc, "Biarch", 
                        FALSE)) 
                        force_biarch <- TRUE
                      else if (length(archs) > 1L) {
                        if (has_configure_ucrt) 
                          warning("this package has a non-empty 'configure.ucrt' file,\nso building only the main architecture\n", 
                            call. = FALSE, domain = NA)
                        else warning("this package has a non-empty 'configure.win' file,\nso building only the main architecture\n", 
                          call. = FALSE, domain = NA)
                      }
                    }
                  }
                  if (force_biarch) 
                    one_only <- FALSE
                  if (one_only || length(archs) < 2L) 
                    has_error <- run_shlib(pkg_name, srcs, instdir, 
                      rarch, use_LTO)
                  else {
                    setwd(owd)
                    test_archs <- archs
                    for (arch in archs) {
                      message("", domain = NA)
                      starsmsg("***", "arch - ", arch)
                      ss <- paste0("src-", arch)
                      dir.create(ss, showWarnings = FALSE)
                      file.copy(Sys.glob("src/*"), ss, recursive = TRUE)
                      .Call(C_dirchmod, ss, group.writable)
                      setwd(ss)
                      ra <- paste0("/", arch)
                      Sys.setenv(R_ARCH = ra, R_ARCH_BIN = ra)
                      has_error <- run_shlib(pkg_name, srcs, 
                        instdir, ra, use_LTO)
                      setwd(owd)
                      if (has_error) 
                        break
                    }
                  }
                }
                setwd(owd)
            }
            else {
                if (file.exists("src/Makefile")) {
                  if (nzchar(rarch)) {
                    arch <- substr(rarch, 2, 1000)
                    starsmsg(stars, "arch - ", arch)
                  }
                  owd <- setwd("src")
                  system_makefile <- file.path(paste0(R.home("etc"), 
                    rarch), "Makeconf")
                  makefiles <- c(system_makefile, makevars_site(), 
                    "Makefile", makevars_user())
                  makeargs <- if (!is.na(use_C)) 
                    sprintf(c("CC='$(CC%s)'", "CFLAGS='$(C%sFLAGS)'"), 
                      use_C)
                  else character()
                  p1 <- function(...) paste(..., collapse = " ")
                  cmd <- paste(MAKE, p1("-f", shQuote(makefiles)), 
                    p1(makeargs))
                  res <- system(cmd)
                  if (res == 0L) 
                    shlib_install(instdir, rarch)
                  else has_error <- TRUE
                  setwd(owd)
                }
                else {
                  owd <- setwd("src")
                  srcs <- dir(pattern = "\\.([cfmM]|cc|cpp|f90|f95|mm)$", 
                    all.files = TRUE)
                  allfiles <- if (file.exists("Makevars")) 
                    c("Makevars", srcs)
                  else srcs
                  wd2 <- setwd(file.path(R.home("bin"), "exec"))
                  archs <- Sys.glob("*")
                  setwd(wd2)
                  if (length(allfiles)) {
                    use_LTO <- if (!is.na(use_LTO)) 
                      use_LTO
                    else parse_description_field(desc, "UseLTO", 
                      default = NA)
                    if (!multiarch || length(archs) <= 1 || file_test("-x", 
                      "../configure")) {
                      if (nzchar(rarch)) 
                        starsmsg("***", "arch - ", substr(rarch, 
                          2, 1000))
                      has_error <- run_shlib(pkg_name, srcs, 
                        instdir, rarch, use_LTO)
                    }
                    else {
                      setwd(owd)
                      test_archs <- archs
                      for (arch in archs) {
                        if (arch == "R") {
                          has_error <- run_shlib(pkg_name, srcs, 
                            instdir, "", use_LTO)
                        }
                        else {
                          starsmsg("***", "arch - ", arch)
                          ss <- paste0("src-", arch)
                          dir.create(ss, showWarnings = FALSE)
                          file.copy(Sys.glob("src/*"), ss, recursive = TRUE)
                          setwd(ss)
                          ra <- paste0("/", arch)
                          Sys.setenv(R_ARCH = ra)
                          has_error <- run_shlib(pkg_name, srcs, 
                            instdir, ra, use_LTO)
                          Sys.setenv(R_ARCH = rarch)
                          setwd(owd)
                          if (has_error) 
                            break
                        }
                      }
                    }
                  }
                  else warning("no source files found", call. = FALSE)
                }
                setwd(owd)
            }
            if (has_error) 
                pkgerrmsg("compilation failed", pkg_name)
            fi <- file.info(Sys.glob(file.path(instdir, "libs", 
                "*")))
            dirs <- basename(row.names(fi[fi$isdir %in% TRUE, 
                ]))
            if (WINDOWS) 
                dirs <- dirs[dirs %in% c("i386", "x64")]
            if (length(dirs)) {
                descfile <- file.path(instdir, "DESCRIPTION")
                olddesc <- readLines(descfile, warn = FALSE)
                olddesc <- filtergrep("^Archs:", olddesc, useBytes = TRUE)
                newdesc <- c(olddesc, paste("Archs:", paste(dirs, 
                  collapse = ", ")))
                writeLines(newdesc, descfile, useBytes = TRUE)
                saveRDS(.split_description(.read_description(descfile)), 
                  file.path(instdir, "Meta", "package.rds"))
            }
        }
        else if (multiarch) {
            if (WINDOWS) {
                wd2 <- setwd(file.path(R.home(), "bin"))
                archs <- Sys.glob("*")
                setwd(wd2)
                test_archs <- archs[archs %in% c("i386", "x64")]
            }
            else {
                wd2 <- setwd(file.path(R.home("bin"), "exec"))
                test_archs <- Sys.glob("*")
                setwd(wd2)
            }
        }
        if (WINDOWS && "x64" %in% test_archs) {
            if (!grepl(" x64 ", utils::win.version())) 
                test_archs <- "i386"
        }
        if (have_cross) 
            Sys.unsetenv("R_ARCH")
        if (WINDOWS && dir.exists("install_time_patches")) 
            file.copy("install_time_patches", instdir, recursive = TRUE)
        if (install_R && dir.exists("R") && length(dir("R"))) {
            starsmsg(stars, "R")
            dir.create(file.path(instdir, "R"), recursive = TRUE, 
                showWarnings = FALSE)
            res <- try(.install_package_code_files(".", instdir))
            if (inherits(res, "try-error")) 
                pkgerrmsg("unable to collate and parse R files", 
                  pkg_name)
            if (file.exists(f <- file.path("R", "sysdata.rda"))) {
                comp <- TRUE
                if (!is.na(lazycompress <- desc["SysDataCompression"])) {
                  comp <- switch(lazycompress, none = FALSE, 
                    gzip = TRUE, bzip2 = 2L, xz = 3L, TRUE)
                }
                else if (file.size(f) > 1e+06) 
                  comp <- 3L
                res <- try(sysdata2LazyLoadDB(f, file.path(instdir, 
                  "R"), compress = comp))
                if (inherits(res, "try-error")) 
                  pkgerrmsg("unable to build sysdata DB", pkg_name)
            }
            if (fake) {
                if (file.exists("NAMESPACE")) {
                  cat("", ".onLoad <- .onAttach <- function(lib, pkg) NULL", 
                    ".onUnload <- function(libpaths) NULL", sep = "\n", 
                    file = file.path(instdir, "R", pkg_name), 
                    append = TRUE)
                  writeLines(sub("useDynLib.*", "useDynLib(\"\")", 
                    readLines("NAMESPACE", warn = FALSE), perl = TRUE, 
                    useBytes = TRUE), file.path(instdir, "NAMESPACE"))
                }
                else {
                  cat("", ".onLoad <- function (libname, pkgname) NULL", 
                    ".onAttach <- function (libname, pkgname) NULL", 
                    ".onDetach <- function(libpath) NULL", ".onUnload <- function(libpath) NULL", 
                    ".Last.lib <- function(libpath) NULL", sep = "\n", 
                    file = file.path(instdir, "R", pkg_name), 
                    append = TRUE)
                }
            }
        }
        if (install_data && dir.exists("data") && length(dir("data"))) {
            starsmsg(stars, "data")
            files <- Sys.glob(file.path("data", "*"))
            if (length(files)) {
                is <- file.path(instdir, "data")
                dir.create(is, recursive = TRUE, showWarnings = FALSE)
                file.remove(Sys.glob(file.path(instdir, "data", 
                  "*")))
                file.copy(files, is, TRUE)
                thislazy <- parse_description_field(desc, "LazyData", 
                  default = lazy_data)
                if (!thislazy && resave_data) {
                  paths <- Sys.glob(c(file.path(is, "*.rda"), 
                    file.path(is, "*.RData")))
                  if (length(paths)) {
                    starsmsg(paste0(stars, "*"), "resaving rda files")
                    resaveRdaFiles(paths, compress = "auto")
                  }
                }
                Sys.chmod(Sys.glob(file.path(instdir, "data", 
                  "*")), fmode)
                if (thislazy) {
                  starsmsg(paste0(stars, "*"), "moving datasets to lazyload DB")
                  lazycompress <- desc["LazyDataCompression"]
                  if (!is.na(lazycompress)) 
                    data_compress <- switch(lazycompress, none = FALSE, 
                      gzip = TRUE, bzip2 = 2L, xz = 3L, TRUE)
                  res <- try(data2LazyLoadDB(pkg_name, lib, compress = data_compress))
                  if (inherits(res, "try-error")) 
                    pkgerrmsg("lazydata failed", pkg_name)
                }
            }
            else warning("empty 'data' directory", call. = FALSE)
        }
        if (install_demo && dir.exists("demo") && length(dir("demo"))) {
            starsmsg(stars, "demo")
            dir.create(file.path(instdir, "demo"), recursive = TRUE, 
                showWarnings = FALSE)
            file.remove(Sys.glob(file.path(instdir, "demo", "*")))
            res <- try(.install_package_demos(".", instdir))
            if (inherits(res, "try-error")) 
                pkgerrmsg("ERROR: installing demos failed")
            Sys.chmod(Sys.glob(file.path(instdir, "demo", "*")), 
                fmode)
        }
        if (install_exec && dir.exists("exec") && length(dir("exec"))) {
            starsmsg(stars, "exec")
            dir.create(file.path(instdir, "exec"), recursive = TRUE, 
                showWarnings = FALSE)
            file.remove(Sys.glob(file.path(instdir, "exec", "*")))
            files <- Sys.glob(file.path("exec", "*"))
            if (length(files)) {
                file.copy(files, file.path(instdir, "exec"), 
                  TRUE)
                if (!WINDOWS) 
                  Sys.chmod(Sys.glob(file.path(instdir, "exec", 
                    "*")), dmode)
            }
        }
        if (install_inst && dir.exists("inst") && length(dir("inst", 
            all.files = TRUE)) > 2L) {
            starsmsg(stars, "inst")
            i_dirs <- list.dirs("inst")[-1L]
            i_dirs <- filtergrep(.vc_dir_names_re, i_dirs)
            ignore_file <- ".Rinstignore"
            ignore <- if (file.exists(ignore_file)) {
                ignore <- readLines(ignore_file, warn = FALSE)
                ignore[nzchar(ignore)]
            }
            else character()
            for (e in ignore) i_dirs <- filtergrep(e, i_dirs, 
                perl = TRUE, ignore.case = TRUE)
            lapply(gsub("^inst", quote_replacement(instdir), 
                i_dirs), function(p) dir.create(p, FALSE, TRUE))
            i_files <- list.files("inst", all.files = TRUE, full.names = TRUE, 
                recursive = TRUE)
            i_files <- filtergrep(.vc_dir_names_re, i_files)
            for (e in ignore) i_files <- filtergrep(e, i_files, 
                perl = TRUE, ignore.case = TRUE)
            i_files <- i_files %w/o% c("inst/doc/Rplots.pdf", 
                "inst/doc/Rplots.ps")
            i_files <- filtergrep("inst/doc/.*[.](log|aux|bbl|blg|dvi)$", 
                i_files, perl = TRUE, ignore.case = TRUE)
            if (!dir.exists("vignettes") && pkgname %notin% c("RCurl")) 
                i_files <- filtergrep("inst/doc/.*[.](png|jpg|jpeg|gif|ps|eps)$", 
                  i_files, perl = TRUE, ignore.case = TRUE)
            i_files <- i_files %w/o% "Makefile"
            i2_files <- gsub("^inst", quote_replacement(instdir), 
                i_files)
            file.copy(i_files, i2_files)
            if (!WINDOWS) {
                modes <- file.mode(i_files)
                execs <- as.logical(modes & as.octmode("100"))
                Sys.chmod(i2_files[execs], dmode)
            }
            if (compact_docs) {
                pdfs <- dir(file.path(instdir, "doc"), pattern = "\\.pdf", 
                  recursive = TRUE, full.names = TRUE, all.files = TRUE)
                res <- compactPDF(pdfs, gs_quality = "none")
                print(res[res$old > 1e+05, ])
            }
        }
        rait <- Sys.getenv("R_ALWAYS_INSTALL_TESTS", "FALSE")
        install_tests <- install_tests || config_val_to_logical(rait)
        if (install_tests && dir.exists("tests") && length(dir("tests", 
            all.files = TRUE)) > 2L) {
            starsmsg(stars, "tests")
            file.copy("tests", instdir, recursive = TRUE)
        }
        if (install_R && dir.exists("R") && length(dir("R"))) {
            BC <- if (!is.na(byte_compile)) 
                byte_compile
            else parse_description_field(desc, "ByteCompile", 
                default = TRUE)
            rcps <- Sys.getenv("R_COMPILE_PKGS")
            rcp <- switch(rcps, `TRUE` = , true = , True = , 
                yes = , Yes = 1, `FALSE` = , false = , False = , 
                no = , No = 0, as.numeric(rcps))
            if (!is.na(rcp)) 
                BC <- (rcp > 0)
            if (BC) {
                starsmsg(stars, "byte-compile and prepare package for lazy loading")
                cmd <- c("Sys.setenv(R_ENABLE_JIT = 0L)", "invisible(compiler::enableJIT(0))", 
                  "invisible(compiler::compilePKGS(1L))", "compiler::setCompilerOptions(suppressAll = FALSE)", 
                  "compiler::setCompilerOptions(suppressUndefined = TRUE)", 
                  "compiler::setCompilerOptions(suppressNoSuperAssignVar = TRUE);")
            }
            else {
                starsmsg(stars, "preparing package for lazy loading")
                cmd <- ""
            }
            keep.source <- parse_description_field(desc, "KeepSource", 
                default = keep.source)
            cmd <- append(cmd, paste0("setwd(", quote_path(getwd()), 
                ")"))
            cmd <- append(cmd, paste0("if (isNamespaceLoaded(\"", 
                pkg_name, "\"))", " unloadNamespace(\"", pkg_name, 
                "\")"))
            cmd <- append(cmd, "suppressPackageStartupMessages(.getRequiredPackages(quietly = TRUE))")
            if (pkg_staged_install) 
                set.install.dir <- paste0(", set.install.dir = ", 
                  quote_path(final_instdir))
            else set.install.dir <- ""
            cmd <- append(cmd, paste0("tools:::makeLazyLoading(\"", 
                pkg_name, "\", ", quote_path(lib), ", ", "keep.source = ", 
                keep.source, ", ", "keep.parse.data = ", keep.parse.data, 
                set.install.dir, ")"))
            cmd <- paste(cmd, collapse = "\n")
            out <- R_runR_deps_only(cmd, setRlibs(LinkingTo = TRUE, 
                quote = TRUE))
            if (length(out)) 
                cat(paste(c(out, ""), collapse = "\n"))
            if (length(attr(out, "status"))) 
                pkgerrmsg("lazy loading failed", pkg_name)
        }
        if (install_help) {
            starsmsg(stars, "help")
            if (!dir.exists("man") || !length(list_files_with_type("man", 
                "docs"))) 
                cat("No man pages found in package ", sQuote(pkg_name), 
                  "\n")
            encoding <- desc["Encoding"]
            if (is.na(encoding)) 
                encoding <- "unknown"
            res <- try(.install_package_Rd_objects(".", instdir, 
                encoding))
            if (inherits(res, "try-error")) 
                pkgerrmsg("installing Rd objects failed", pkg_name)
            starsmsg(paste0(stars, "*"), "installing help indices")
            .writePkgIndices(pkg_dir, instdir)
            if (build_help) {
                outenc <- desc["Encoding"]
                if (is.na(outenc)) 
                  outenc <- "UTF-8"
                .convertRdfiles(pkg_dir, instdir, types = build_help_types, 
                  outenc = outenc)
            }
            if (dir.exists(figdir <- file.path(pkg_dir, "man", 
                "figures"))) {
                starsmsg(paste0(stars, "*"), "copying figures")
                dir.create(destdir <- file.path(instdir, "help", 
                  "figures"))
                file.copy(Sys.glob(c(file.path(figdir, "*.png"), 
                  file.path(figdir, "*.jpg"), file.path(figdir, 
                    "*.jpeg"), file.path(figdir, "*.svg"), file.path(figdir, 
                    "*.pdf"))), destdir)
            }
        }
        if (install_inst || install_demo || install_help) {
            starsmsg(stars, "building package indices")
            cmd <- c("tools:::.install_package_indices(\".\",", 
                quote_path(instdir), ")")
            cmd <- paste(cmd, collapse = "\n")
            out <- R_runR_deps_only(cmd, setRlibs(LinkingTo = TRUE, 
                quote = TRUE))
            if (length(out)) 
                cat(paste(c(out, ""), collapse = "\n"))
            if (length(attr(out, "status"))) 
                errmsg("installing package indices failed")
            if (dir.exists("vignettes")) {
                starsmsg(stars, "installing vignettes")
                enc <- desc["Encoding"]
                if (is.na(enc)) 
                  enc <- ""
                if (!fake && file_test("-f", file.path("build", 
                  "vignette.rds"))) 
                  installer <- .install_package_vignettes3
                else installer <- .install_package_vignettes2
                res <- try(installer(".", instdir, enc))
                if (inherits(res, "try-error")) 
                  errmsg("installing vignettes failed")
            }
        }
        if (install_R && file.exists("NAMESPACE")) {
            res <- try(.install_package_namespace_info(if (fake) 
                instdir
            else ".", instdir))
            if (inherits(res, "try-error")) 
                errmsg("installing namespace metadata failed")
        }
        if (clean) 
            run_clean()
        do_test_load <- function(extra_cmd = NULL) {
            cmd <- paste0("tools:::.test_load_package('", pkg_name, 
                "', ", quote_path(lib), ")")
            if (!is.null(extra_cmd)) 
                cmd <- paste0(cmd, "\n", extra_cmd)
            tlim <- get_timeout(Sys.getenv("_R_INSTALL_TEST_LOAD_ELAPSED_TIMEOUT_"))
            if (length(test_archs) > 1L) {
                msgs <- character()
                for (arch in test_archs) {
                  starsmsg("***", "arch - ", arch)
                  out <- R_runR_deps_only(cmd, deps_only_env = setRlibs(lib0, 
                    self = TRUE, quote = TRUE), arch = arch, 
                    timeout = tlim, multiarch = TRUE)
                  if (length(attr(out, "status"))) 
                    msgs <- c(msgs, arch)
                  if (length(out)) 
                    cat(paste(c(out, ""), collapse = "\n"))
                }
                if (length(msgs)) {
                  msg <- paste("loading failed for", paste(sQuote(msgs), 
                    collapse = ", "))
                  errmsg(msg)
                }
            }
            else {
                out <- R_runR_deps_only(cmd, deps_only_env = setRlibs(lib0, 
                  self = TRUE, quote = TRUE), timeout = tlim)
                if (length(out)) {
                  cat(paste(c(out, ""), collapse = "\n"))
                }
                if (length(attr(out, "status"))) 
                  errmsg("loading failed")
            }
        }
        if (test_load && !have_cross) {
            if (pkg_staged_install) 
                starsmsg(stars, "testing if installed package can be loaded from temporary location")
            else starsmsg(stars, "testing if installed package can be loaded")
            do_test_load()
        }
        if (pkg_staged_install) {
            if (WINDOWS) {
                unlink(final_instdir, recursive = TRUE)
                if (!file.rename(instdir, final_instdir)) {
                  if (dir.exists(instdir) && !dir.exists(final_instdir)) {
                    message("WARNING: moving package to final location failed, copying instead")
                    ret <- file.copy(instdir, dirname(final_instdir), 
                      recursive = TRUE, copy.date = TRUE)
                    if (any(!ret)) 
                      errmsg("   copying to final location failed")
                    unlink(instdir, recursive = TRUE)
                  }
                  else errmsg("   moving to final location failed")
                }
            }
            else {
                patch_rpaths()
                unlink(final_instdir, recursive = TRUE)
                owd <- setwd(startdir)
                status <- system(paste("mv -f", shQuote(instdir), 
                  shQuote(dirname(final_instdir))))
                if (status) 
                  errmsg("  moving to final location failed")
                setwd(owd)
            }
            instdir <- final_instdir
            lib <- final_lib
            Sys.setenv(R_PACKAGE_DIR = final_rpackagedir)
            Sys.setenv(R_LIBS = final_rlibs)
            .libPaths(final_libpaths)
            if (test_load) {
                starsmsg(stars, "testing if installed package can be loaded from final location")
                serf <- tempfile()
                cmd <- paste0("f <- base::file(", quote_path(serf), 
                  ", \"wb\")")
                cmd <- append(cmd, paste0("base::invisible(base::suppressWarnings(base::serialize(", 
                  "base::as.list(base::getNamespace(\"", pkg_name, 
                  "\"), all.names=TRUE), f)))"))
                cmd <- append(cmd, "base::close(f)")
                do_test_load(extra_cmd = paste(cmd, collapse = "\n"))
                starsmsg(stars, "testing if installed package keeps a record of temporary installation path")
                r <- readBin(serf, "raw", n = file.size(serf))
                unlink(serf)
                if (length(grepRaw("00new", r, fixed = TRUE, 
                  all = FALSE, value = FALSE))) 
                  errmsg("hard-coded installation path: ", "please report to the package maintainer and use ", 
                    sQuote("--no-staged-install"))
            }
        }
        if (do_strip_lib && nzchar(strip_cmd <- Sys.getenv("R_STRIP_STATIC_LIB")) && 
            length(a_s <- Sys.glob(file.path(file.path(lib, curPkg), 
                "lib", "*.a")))) {
            if (length(a_s) > 1L) 
                starsmsg(stars, "stripping static libraries under lib")
            else starsmsg(stars, "stripping static library under lib")
            system(paste(c(strip_cmd, shQuote(a_s)), collapse = " "))
        }
        if (do_strip_lib && nzchar(strip_cmd <- Sys.getenv("R_STRIP_SHARED_LIB")) && 
            length(so_s <- Sys.glob(file.path(file.path(lib, 
                curPkg), "lib", paste0("*", SHLIB_EXT))))) {
            if (length(so_s) > 1L) 
                starsmsg(stars, "stripping dynamic libraries under lib")
            else starsmsg(stars, "stripping dynamic library under lib")
            system(paste(c(strip_cmd, shQuote(so_s)), collapse = " "))
        }
    }
    options(showErrorCalls = FALSE)
    pkgs <- character()
    if (is.null(args)) {
        args <- commandArgs(TRUE)
        args <- paste(args, collapse = " ")
        args <- strsplit(args, "nextArg", fixed = TRUE)[[1L]][-1L]
    }
    args0 <- args
    startdir <- getwd()
    if (is.null(startdir)) 
        stop("current working directory cannot be ascertained")
    lib <- lib0 <- ""
    clean <- FALSE
    preclean <- FALSE
    debug <- FALSE
    static_html <- nzchar(system.file("html", "mean.html", package = "base"))
    build_html <- static_html
    build_latex <- FALSE
    build_example <- FALSE
    use_configure <- TRUE
    configure_args <- character()
    configure_vars <- character()
    fake <- FALSE
    lazy_data <- FALSE
    byte_compile <- NA
    staged_install <- NA
    lock <- getOption("install.lock", NA)
    pkglock <- FALSE
    libs_only <- FALSE
    tar_up <- zip_up <- FALSE
    shargs <- character()
    multiarch <- TRUE
    force_biarch <- FALSE
    force_both <- FALSE
    test_load <- TRUE
    merge <- FALSE
    dsym <- nzchar(Sys.getenv("PKG_MAKE_DSYM"))
    get_user_libPaths <- FALSE
    data_compress <- TRUE
    resave_data <- FALSE
    compact_docs <- FALSE
    keep.source <- getOption("keep.source.pkgs")
    keep.parse.data <- getOption("keep.parse.data.pkgs")
    use_LTO <- NA
    use_C <- NA
    built_stamp <- character()
    install_libs <- TRUE
    install_R <- TRUE
    install_data <- TRUE
    install_demo <- TRUE
    install_exec <- TRUE
    install_inst <- TRUE
    install_help <- TRUE
    install_tests <- FALSE
    do_strip <- do_strip_lib <- FALSE
    while (length(args)) {
        a <- args[1L]
        if (a %in% c("-h", "--help")) {
            Usage()
            do_exit(0)
        }
        else if (a %in% c("-v", "--version")) {
            cat("R add-on package installer: ", R.version[["major"]], 
                ".", R.version[["minor"]], " (r", R.version[["svn rev"]], 
                ")\n", sep = "")
            cat("", .R_copyright_msg(2000), "This is free software; see the GNU General Public License version 2", 
                "or later for copying conditions.  There is NO warranty.", 
                sep = "\n")
            do_exit(0)
        }
        else if (a %in% c("-c", "--clean")) {
            clean <- TRUE
            shargs <- c(shargs, "--clean")
        }
        else if (a == "--preclean") {
            preclean <- TRUE
            shargs <- c(shargs, "--preclean")
        }
        else if (a %in% c("-d", "--debug")) {
            debug <- TRUE
        }
        else if (a == "--no-configure") {
            use_configure <- FALSE
        }
        else if (a == "--no-docs") {
            build_html <- build_latex <- build_example <- FALSE
        }
        else if (a == "--no-html") {
            build_html <- FALSE
        }
        else if (a == "--html") {
            build_html <- TRUE
        }
        else if (a == "--latex") {
            build_latex <- TRUE
        }
        else if (a == "--example") {
            build_example <- TRUE
        }
        else if (a == "-l") {
            if (length(args) >= 2L) {
                lib <- args[2L]
                args <- args[-1L]
            }
            else stop("-l option without value", call. = FALSE)
        }
        else if (substr(a, 1, 10) == "--library=") {
            lib <- substr(a, 11, 1000)
        }
        else if (substr(a, 1, 17) == "--configure-args=") {
            configure_args <- c(configure_args, substr(a, 18, 
                1000))
        }
        else if (substr(a, 1, 17) == "--configure-vars=") {
            configure_vars <- c(configure_vars, substr(a, 18, 
                1000))
        }
        else if (a == "--fake") {
            fake <- TRUE
        }
        else if (a == "--no-lock") {
            lock <- pkglock <- FALSE
        }
        else if (a == "--lock") {
            lock <- TRUE
            pkglock <- FALSE
        }
        else if (a == "--pkglock") {
            lock <- pkglock <- TRUE
        }
        else if (a == "--libs-only") {
            libs_only <- TRUE
        }
        else if (a == "--no-multiarch") {
            multiarch <- FALSE
        }
        else if (a == "--maybe-get-user-libPaths") {
            get_user_libPaths <- TRUE
        }
        else if (a == "--build") {
            if (WINDOWS) 
                zip_up <- TRUE
            else tar_up <- TRUE
        }
        else if (substr(a, 1, 16) == "--data-compress=") {
            dc <- substr(a, 17, 1000)
            dc <- match.arg(dc, c("none", "gzip", "bzip2", "xz"))
            data_compress <- switch(dc, none = FALSE, gzip = TRUE, 
                bzip2 = 2, xz = 3)
        }
        else if (a == "--resave-data") {
            resave_data <- TRUE
        }
        else if (a == "--install-tests") {
            install_tests <- TRUE
        }
        else if (a == "--no-inst") {
            install_inst <- FALSE
        }
        else if (a == "--no-R") {
            install_R <- FALSE
        }
        else if (a == "--no-libs") {
            install_libs <- FALSE
        }
        else if (a == "--no-data") {
            install_data <- FALSE
        }
        else if (a == "--no-demo") {
            install_demo <- FALSE
        }
        else if (a == "--no-exec") {
            install_exec <- FALSE
        }
        else if (a == "--no-help") {
            install_help <- FALSE
        }
        else if (a == "--no-test-load") {
            test_load <- FALSE
        }
        else if (a == "--no-clean-on-error") {
            clean_on_error <- FALSE
        }
        else if (a == "--merge-multiarch") {
            merge <- TRUE
        }
        else if (a == "--compact-docs") {
            compact_docs <- TRUE
        }
        else if (a == "--with-keep.source") {
            keep.source <- TRUE
        }
        else if (a == "--without-keep.source") {
            keep.source <- FALSE
        }
        else if (a == "--with-keep.parse.data") {
            keep.parse.data <- TRUE
        }
        else if (a == "--without-keep.parse.data") {
            keep.parse.data <- FALSE
        }
        else if (a == "--byte-compile") {
            byte_compile <- TRUE
        }
        else if (a == "--no-byte-compile") {
            byte_compile <- FALSE
        }
        else if (a == "--use-LTO") {
            use_LTO <- TRUE
        }
        else if (a == "--no-use-LTO") {
            use_LTO <- FALSE
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
        else if (a == "--staged-install") {
            staged_install <- TRUE
        }
        else if (a == "--no-staged-install") {
            staged_install <- FALSE
        }
        else if (a == "--dsym") {
            dsym <- TRUE
        }
        else if (a == "--strip") {
            do_strip <- TRUE
        }
        else if (a == "--strip-lib") {
            do_strip_lib <- TRUE
        }
        else if (substr(a, 1, 18) == "--built-timestamp=") {
            built_stamp <- substr(a, 19, 1000)
        }
        else if (startsWith(a, "-")) {
            message("Warning: unknown option ", sQuote(a), domain = NA)
        }
        else pkgs <- c(pkgs, a)
        args <- args[-1L]
    }
    if (keep.tmpdir) {
        make_tmpdir <- function(prefix, nchars = 8, ntries = 100) {
            for (i in 1:ntries) {
                name <- paste(sample(c(0:9, letters, LETTERS), 
                  nchars, replace = TRUE), collapse = "")
                path <- paste(prefix, name, sep = "/")
                if (dir.create(path, showWarnings = FALSE, recursive = T)) {
                  return(path)
                }
            }
            stop("cannot create unique directory for build")
        }
        tmpdir <- make_tmpdir(user.tmpdir)
    }
    else {
        tmpdir <- tempfile("R.INSTALL")
        if (!dir.create(tmpdir)) 
            stop("cannot create temporary directory")
    }
    if (merge) {
        if (length(pkgs) != 1L || !file_test("-f", pkgs)) 
            stop("ERROR: '--merge-multiarch' applies only to a single tarball", 
                call. = FALSE)
        if (WINDOWS) {
            f <- dir(file.path(R.home(), "bin"))
            archs <- f[f %in% c("i386", "x64")]
            if (length(archs) > 1L) {
                args <- args0 %w/o% c("--merge-multiarch", "--build")
                Sys.setenv(`_R_INSTALL_NO_DONE_` = "yes")
                for (arch in archs) {
                  cmd <- c(shQuote(file.path(R.home(), "bin", 
                    arch, "Rcmd.exe")), "INSTALL", shQuote(args), 
                    "--no-multiarch")
                  if (arch == "x64") {
                    Sys.setenv(`_R_INSTALL_SUPPRESS_NO_STAGED_MESSAGE_` = "yes")
                    cmd <- c(cmd, "--libs-only --no-staged-install", 
                      if (zip_up) "--build")
                    Sys.unsetenv("_R_INSTALL_NO_DONE_")
                  }
                  cmd <- paste(cmd, collapse = " ")
                  if (debug) 
                    message("about to run ", cmd, domain = NA)
                  message("\n", "install for ", arch, "\n", domain = NA)
                  res <- system(cmd)
                  if (arch == "x64") 
                    Sys.unsetenv("_R_INSTALL_SUPPRESS_NO_STAGED_MESSAGE_")
                  if (res) 
                    break
                }
            }
        }
        else {
            archs <- dir(file.path(R.home("bin"), "exec"))
            if (length(archs) > 1L) {
                args <- args0 %w/o% c("--merge-multiarch", "--build")
                Sys.setenv(`_R_INSTALL_NO_DONE_` = "yes")
                last <- archs[length(archs)]
                for (arch in archs) {
                  cmd <- c(shQuote(file.path(R.home("bin"), "R")), 
                    "--arch", arch, "CMD", "INSTALL", shQuote(args), 
                    "--no-multiarch")
                  if (arch != archs[1L]) {
                    Sys.setenv(`_R_INSTALL_SUPPRESS_NO_STAGED_MESSAGE_` = "yes")
                    cmd <- c(cmd, "--libs-only --no-staged-install")
                  }
                  if (arch == last) {
                    Sys.unsetenv("_R_INSTALL_NO_DONE_")
                    if (tar_up) 
                      cmd <- c(cmd, "--build")
                  }
                  cmd <- paste(cmd, collapse = " ")
                  if (debug) 
                    message("about to run ", cmd, domain = NA)
                  message("\n", "install for ", arch, "\n", domain = NA)
                  res <- system(cmd)
                  if (arch != archs[1L]) 
                    Sys.unsetenv("_R_INSTALL_SUPPRESS_NO_STAGED_MESSAGE_")
                  if (res) 
                    break
                }
            }
        }
        if (length(archs) > 1L) {
            if (res) 
                do_exit_on_error()
            do_cleanup()
            on.exit()
            return(invisible())
        }
        message("only one architecture so ignoring '--merge-multiarch'", 
            domain = NA)
    }
    allpkgs <- character()
    for (pkg in pkgs) {
        if (debug) 
            message("processing ", sQuote(pkg), domain = NA)
        if (file_test("-f", pkg)) {
            if (WINDOWS && endsWith(pkg, ".zip")) {
                if (debug) 
                  message("a zip file", domain = NA)
                pkgname <- basename(pkg)
                pkgname <- sub("\\.zip$", "", pkgname)
                pkgname <- sub("_[0-9.-]+$", "", pkgname)
                allpkgs <- c(allpkgs, pkg)
                next
            }
            if (debug) 
                message("a file", domain = NA)
            of <- dir(tmpdir, full.names = TRUE)
            if (utils::untar(pkg, exdir = tmpdir, tar = Sys.getenv("R_INSTALL_TAR", 
                "internal"))) 
                errmsg("error unpacking tarball")
            nf <- dir(tmpdir, full.names = TRUE)
            new <- nf %w/o% of
            if (!length(new)) 
                errmsg("cannot extract package from ", sQuote(pkg))
            if (length(new) > 1L) 
                errmsg("extracted multiple files from ", sQuote(pkg))
            if (dir.exists(new)) 
                pkgname <- basename(new)
            else errmsg("cannot extract package from ", sQuote(pkg))
            if (file.exists(file.path(tmpdir, pkgname, "DESCRIPTION"))) {
                allpkgs <- c(allpkgs, file.path(tmpdir, pkgname))
            }
            else errmsg("cannot extract package from ", sQuote(pkg))
        }
        else if (file.exists(file.path(pkg, "DESCRIPTION"))) {
            if (debug) 
                message("a directory", domain = NA)
            pkgname <- basename(pkg)
            allpkgs <- c(allpkgs, fullpath(pkg))
        }
        else {
            warning("invalid package ", sQuote(pkg), call. = FALSE)
            next
        }
    }
    if (!length(allpkgs)) 
        stop("ERROR: no packages specified", call. = FALSE)
    if (!nzchar(lib)) {
        lib <- if (get_user_libPaths) {
            system(paste(shQuote(file.path(R.home("bin"), "Rscript")), 
                "-e 'cat(.libPaths()[1L])'"), intern = TRUE)
        }
        else .libPaths()[1L]
        starsmsg(stars, "installing to library ", sQuote(lib))
    }
    else {
        lib0 <- lib <- path.expand(lib)
        cwd <- tryCatch(setwd(lib), error = function(e) stop(gettextf("ERROR: cannot cd to directory %s", 
            sQuote(lib)), call. = FALSE, domain = NA))
        lib <- getwd()
        setwd(cwd)
    }
    ok <- dir.exists(lib)
    if (ok) {
        if (WINDOWS) {
            fn <- file.path(lib, paste0("_test_dir_", Sys.getpid()))
            unlink(fn, recursive = TRUE)
            res <- try(dir.create(fn, showWarnings = FALSE))
            if (inherits(res, "try-error") || !res) 
                ok <- FALSE
            else unlink(fn, recursive = TRUE)
        }
        else ok <- file.access(lib, 2L) == 0L
    }
    if (!ok) 
        stop("ERROR: no permission to install to directory ", 
            sQuote(lib), call. = FALSE)
    group.writable <- if (WINDOWS) 
        FALSE
    else {
        d <- as.octmode("020")
        (file.mode(lib) & d) == d
    }
    if (libs_only) {
        install_R <- FALSE
        install_data <- FALSE
        install_demo <- FALSE
        install_exec <- FALSE
        install_inst <- FALSE
        install_help <- FALSE
    }
    more_than_libs <- !libs_only
    mk_lockdir <- function(lockdir) {
        if (file.exists(lockdir)) {
            message("ERROR: failed to lock directory ", sQuote(lib), 
                " for modifying\nTry removing ", sQuote(lockdir), 
                domain = NA)
            do_cleanup_tmpdir()
            do_exit(status = 3)
        }
        dir.create(lockdir, recursive = TRUE)
        if (!dir.exists(lockdir)) {
            message("ERROR: failed to create lock directory ", 
                sQuote(lockdir), domain = NA)
            do_cleanup_tmpdir()
            do_exit(status = 3)
        }
        if (debug) 
            starsmsg(stars, "created lock directory ", sQuote(lockdir))
    }
    if (is.na(lock)) {
        lock <- TRUE
        pkglock <- length(allpkgs) == 1L
    }
    if (lock && !pkglock) {
        lockdir <- file.path(lib, "00LOCK")
        mk_lockdir(lockdir)
    }
    if (is.na(staged_install)) {
        rsi <- Sys.getenv("R_INSTALL_STAGED")
        rsi <- switch(rsi, `TRUE` = , true = , True = , yes = , 
            Yes = 1, `FALSE` = , false = , False = , no = , No = 0, 
            as.numeric(rsi))
        if (!is.na(rsi)) 
            staged_install <- (rsi > 0)
        else staged_install <- TRUE
    }
    if ((tar_up || zip_up) && fake) 
        stop("building a fake installation is disallowed")
    if (fake) {
        use_configure <- FALSE
        if ("--html" %notin% args0) 
            build_html <- FALSE
        build_latex <- FALSE
        build_example <- FALSE
        install_libs <- FALSE
        install_demo <- FALSE
        install_exec <- FALSE
    }
    build_help_types <- character()
    if (build_html) 
        build_help_types <- c(build_help_types, "html")
    if (build_latex) 
        build_help_types <- c(build_help_types, "latex")
    if (build_example) 
        build_help_types <- c(build_help_types, "example")
    build_help <- length(build_help_types) > 0L
    if (debug) 
        starsmsg(stars, "build_help_types=", paste(build_help_types, 
            collapse = " "))
    if (debug) 
        starsmsg(stars, "DBG: 'R CMD INSTALL' now doing do_install()")
    for (pkg in allpkgs) {
        if (pkglock) {
            lockdir <- file.path(lib, paste0("00LOCK-", basename(pkg)))
            mk_lockdir(lockdir)
        }
        do_install(pkg)
    }
    do_cleanup()
    on.exit()
    invisible()
}
