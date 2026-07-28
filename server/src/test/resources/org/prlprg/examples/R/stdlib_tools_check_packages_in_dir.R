#? stdlib
`check_packages_in_dir` <- function (dir, pfiles = Sys.glob("*.tar.gz"), check_args = character(), 
    check_args_db = list(), reverse = NULL, check_env = character(), 
    xvfb = FALSE, Ncpus = getOption("Ncpus", 1L), clean = TRUE, 
    install_args = list(), parallel_args = list(), ...) 
{
    owd <- getwd()
    dir <- normalizePath(dir)
    setwd(dir)
    on.exit(setwd(owd))
    .check_packages_in_dir_retval <- function(dir, pfiles, pnames = character(), 
        rnames = character()) {
        structure(pfiles, dir = dir, pnames = pnames, rnames = rnames, 
            class = "check_packages_in_dir")
    }
    if (!length(pfiles)) {
        message("no packages to check")
        return(invisible(.check_packages_in_dir_retval(dir, pfiles)))
    }
    pnames <- sub("_.*", "", pfiles)
    os_type <- .Platform$OS.type
    xvfb_options <- "-screen 0 1280x1024x24"
    if (os_type == "windows") 
        xvfb <- FALSE
    else if (is.logical(xvfb)) {
        if (!isTRUE(xvfb)) 
            xvfb <- FALSE
    }
    else {
        xvfb_options <- as.character(xvfb)
        xvfb <- TRUE
    }
    curl <- if (os_type == "windows") 
        sprintf("file:///%s", dir)
    else sprintf("file://%s", dir)
    libdir <- file.path(dir, "Library")
    dir.create(libdir, showWarnings = FALSE)
    outdir <- file.path(dir, "Outputs")
    dir.create(outdir, showWarnings = FALSE)
    pnames_using_install_no <- character()
    pnames_using_install_fake <- character()
    check_args_db <- as.list(check_args_db)
    if (length(check_args_db) && !is.null(nms <- names(check_args_db))) {
        args <- lapply(check_args_db, function(e) scan(text = e, 
            what = character(), quiet = TRUE))
        pnames_using_install_no <- nms[vapply(args, function(e) any(e == 
            "--install=no"), NA)]
        pnames_using_install_fake <- nms[vapply(args, function(e) any(e == 
            "--install=fake"), NA)]
    }
    else {
        check_args_db <- list()
    }
    write_PACKAGES(dir, type = "source")
    if (dir.exists(depdir <- file.path(dir, "Depends"))) {
        write_PACKAGES(depdir, type = "source")
        curl <- c(curl, paste0(curl, "/Depends"))
    }
    localones <- utils::available.packages(contriburl = curl, 
        type = "source")
    curls <- utils::contrib.url(getOption("repos"), type = "source")
    available <- utils::available.packages(contriburl = curls, 
        type = "source")
    available <- rbind(localones, available)
    available <- available[!duplicated(available[, "Package"]), 
        , drop = FALSE]
    curls <- c(curl, curls)
    pnames_using_install_no <- c(pnames_using_install_no, setdiff(pnames_using_install_fake, 
        available[, "Package"]))
    pnames_using_install_fake <- intersect(pnames_using_install_fake, 
        available[, "Package"])
    if (!is.null(reverse) && !isFALSE(reverse)) {
        defaults <- list(which = c("Depends", "Imports", "LinkingTo"), 
            recursive = FALSE, repos = getOption("repos"))
        if (!is.character(reverse)) {
            reverse <- as.list(reverse)
            pos <- pmatch(names(reverse), names(defaults), nomatch = 0L)
            defaults[pos] <- reverse[pos > 0L]
        }
        subset_reverse_repos <- !identical(defaults$repos, getOption("repos"))
        if (subset_reverse_repos && !all(defaults$repos %in% 
            getOption("repos"))) 
            stop("'reverse$repos' should be a subset of getOption(\"repos\")")
        rnames <- if (is.character(reverse)) {
            reverse
        }
        else if (is.list(defaults$which)) {
            defaults$recursive <- rep_len(as.list(defaults$recursive), 
                length(defaults$which))
            unlist(Map(function(w, r) package_dependencies(setdiff(pnames, 
                pnames_using_install_no), available, which = w, 
                recursive = r, reverse = TRUE), defaults$which, 
                defaults$recursive), use.names = FALSE)
        }
        else {
            package_dependencies(setdiff(pnames, pnames_using_install_no), 
                available, which = defaults$which, recursive = defaults$recursive, 
                reverse = TRUE)
        }
        add_recommended_maybe <- config_val_to_logical(Sys.getenv("_R_TOOLS_C_P_I_D_ADD_RECOMMENDED_MAYBE_", 
            "FALSE"))
        if (add_recommended_maybe) {
            rnames <- c(rnames, names(Filter(length, lapply(package_dependencies(.get_standard_package_names()$recommended, 
                available, which = "all"), intersect, pnames))))
        }
        rnames <- intersect(unlist(rnames, use.names = FALSE), 
            available[, "Package"])
        rnames <- setdiff(rnames, pnames)
        pos <- match(rnames, available[, "Package"], nomatch = 0L)
        if (subset_reverse_repos) {
            pos <- split(pos[pos > 0L], available[pos, "Repository"])
            nms <- names(pos)
            ind <- (rowSums(outer(nms, defaults$repos, startsWith)) > 
                0)
            pos <- unlist(pos[ind], use.names = FALSE)
        }
        rnames <- available[pos, "Package"]
        rfiles <- sprintf("%s_%s.tar.gz", rnames, available[pos, 
            "Version"])
        if (length(rfiles)) {
            message("downloading reverse dependencies ...")
            rfurls <- sprintf("%s/%s", available[pos, "Repository"], 
                rfiles)
            for (i in seq_along(rfiles)) {
                message(sprintf("downloading %s ... ", rfiles[i]), 
                  appendLF = FALSE)
                status <- if (!utils::download.file(rfurls[i], 
                  rfiles[i], quiet = TRUE)) 
                  "ok"
                else "failed"
                message(status)
            }
            message("")
        }
    }
    else {
        rfiles <- rnames <- character()
    }
    pnames <- c(pnames, rnames)
    if (xvfb) {
        pid <- start_virtual_X11_fb(xvfb_options)
        on.exit(close_virtual_X11_db(pid), add = TRUE)
    }
    depends <- package_dependencies(pnames, available, which = "most")
    depends <- setdiff(unique(unlist(depends, use.names = FALSE)), 
        .get_standard_package_names()$base)
    libs <- c(libdir, .libPaths())
    installed <- utils::installed.packages(libs)
    installed <- installed[!duplicated(installed[, "Package"]), 
        , drop = FALSE]
    outofdate <- utils::old.packages(instPkgs = installed, available = available)[, 
        "Package"]
    installed <- installed[, "Package"]
    depends <- c(setdiff(depends, installed), intersect(intersect(depends, 
        installed), outofdate))
    if (length(depends)) {
        message(paste(strwrap(sprintf("installing dependencies %s", 
            paste(sQuote(sort(depends)), collapse = ", ")), exdent = 2L), 
            collapse = "\n"), domain = NA)
        message("")
        iflags <- as.list(rep.int("--fake", length(pnames_using_install_fake)))
        names(iflags) <- pnames_using_install_fake
        tmpdir <- tempfile(tmpdir = outdir)
        dir.create(tmpdir)
        do.call(utils::install.packages, c(list(pkgs = depends, 
            lib = libdir, contriburl = curls, available = available, 
            dependencies = NA, INSTALL_opts = iflags, keep_outputs = tmpdir, 
            Ncpus = Ncpus, type = "source"), install_args))
        outfiles <- Sys.glob(file.path(tmpdir, "*.out"))
        file.rename(outfiles, file.path(outdir, sprintf("install_%s", 
            basename(outfiles))))
        unlink(tmpdir, recursive = TRUE)
        message("")
    }
    check_args <- if (is.list(check_args)) {
        c(rep.int(list(check_args[[1L]]), length(pfiles)), rep.int(list(check_args[[2L]]), 
            length(rfiles)))
    }
    else {
        rep.int(list(check_args), length(pnames))
    }
    check_args_db <- check_args_db[pnames]
    check_args_db <- Map(c, check_args, check_args_db)
    names(check_args_db) <- pnames
    check_env <- if (is.list(check_env)) {
        c(rep.int(list(check_env[[1L]]), length(pfiles)), rep.int(list(check_env[[2L]]), 
            length(rfiles)))
    }
    else {
        rep.int(list(check_env), length(pnames))
    }
    check_env_db <- as.list(check_env)
    names(check_env_db) <- pnames
    pfiles <- c(pfiles, rfiles)
    oldrlibs <- Sys.getenv("R_LIBS")
    Sys.setenv(R_LIBS = paste(libs, collapse = .Platform$path.sep))
    on.exit(Sys.setenv(R_LIBS = oldrlibs), add = TRUE)
    check_package <- function(pfile, args_db = NULL, env_db = NULL) {
        message(sprintf("checking %s ...", pfile))
        pname <- sub("_.*", "", basename(pfile))
        out <- file.path(outdir, sprintf("check_%s_stdout.txt", 
            pname))
        err <- file.path(outdir, sprintf("check_%s_stderr.txt", 
            pname))
        lim <- get_timeout(Sys.getenv("_R_CHECK_ELAPSED_TIMEOUT_"))
        system.time(system2(file.path(R.home("bin"), "R"), c("CMD", 
            "check", "--timings", args_db[[pname]], pfile), stdout = out, 
            stderr = err, env = env_db[[pname]], timeout = lim))
    }
    if (Ncpus > 1L) {
        if (os_type != "windows") {
            timings <- do.call(parallel::mclapply, c(list(X = pfiles, 
                FUN = check_package, args_db = check_args_db, 
                env_db = check_env_db, mc.cores = Ncpus), parallel_args))
        }
        else {
            cl <- parallel::makeCluster(Ncpus)
            on.exit(parallel::stopCluster(cl), add = TRUE)
            timings <- do.call(parallel::parLapply, c(list(cl = cl, 
                X = pfiles, fun = check_package, args_db = check_args_db, 
                env_db = check_env_db), parallel_args))
        }
    }
    else {
        timings <- lapply(pfiles, check_package, check_args_db, 
            check_env_db)
    }
    timings <- do.call(rbind, lapply(timings, summary))
    rownames(timings) <- pnames
    utils::write.table(timings, "timings.tab")
    file.rename(sprintf("%s.Rcheck", rnames), sprintf("rdepends_%s.Rcheck", 
        rnames))
    if (clean) {
        file.remove(rfiles)
    }
    else {
        file.rename(rfiles, sprintf("rdepends_%s", rfiles))
    }
    invisible(.check_packages_in_dir_retval(dir, pfiles, setdiff(pnames, 
        rnames), rnames))
}

# Examples


