#? stdlib
`.check_package_CRAN_incoming` <- function (dir, localOnly = FALSE, pkgSize = NA) 
{
    out <- list()
    class(out) <- "check_package_CRAN_incoming"
    meta <- .get_package_metadata(dir, FALSE)
    lic_info <- analyze_license(meta["License"])
    foss <- lic_info$is_verified
    if (length(extensions <- lic_info$extensions) && ((length(components <- extensions$components) != 
        1L) || (.license_component_is_for_stub_and_ok(components, 
        dir) != 0L)) && any(ind <- extensions$extensible)) {
        out$extensions <- extensions$components[ind]
        out$pointers <- Filter(length, lapply(lic_info$pointers, 
            function(p) {
                fp <- file.path(dir, p)
                if (file_test("-f", fp)) {
                  lines <- readLines(fp, warn = FALSE)
                  pos <- grep("[^[:blank:]]", lines, useBytes = TRUE)
                  c(p, if (len <- length(pos)) {
                    lines[seq.int(from = pos[1L], to = pos[len])]
                  })
                }
                else NULL
            }))
    }
    out$Maintainer <- meta["Maintainer"]
    display <- gsub("<.*", "", as.vector(out$Maintainer))
    display <- sub("[[:space:]]+$", "", sub("^[[:space:]]+", 
        "", display, useBytes = TRUE), useBytes = TRUE)
    if (grepl("[,]", display, useBytes = TRUE) && !grepl("^\".*\"$", 
        display, useBytes = TRUE)) 
        out$Maintainer_needs_quotes <- TRUE
    if (!nzchar(display)) 
        out$empty_Maintainer_name <- TRUE
    check_maintainer_address <- function(s) {
        re <- paste0("^", "[[:space:]]*", "([^<]*|\"([^\"]|\\\\\")*\")", 
            "[[:space:]]*", "(<[^>]+>)", "[[:space:]]*", "(.*)", 
            "[[:space:]]*", "$")
        s <- unlist(regmatches(s, regexec(re, s)))
        length(s) && (s[5L] == "")
    }
    maintainer <- gsub("\n", " ", meta["Maintainer"], fixed = TRUE)
    if ((maintainer != "ORPHANED") && !check_maintainer_address(maintainer)) 
        out$Maintainer_invalid_or_multi_person <- TRUE
    ver <- meta["Version"]
    if (is.na(ver)) 
        stop("Package has no 'Version' field", call. = FALSE)
    if (grepl("(^|[.-])0[0-9]+", ver)) 
        out$version_with_leading_zeroes <- ver
    if ((ver == "@VERSION@") && !is.na(meta["Priority"]) && (meta["Priority"] == 
        "base")) 
        ver <- meta["Version"] <- format(getRversion())
    unlisted_version <- unlist(package_version(ver))
    if (any(unlisted_version >= 1234 & unlisted_version != as.integer(format(Sys.Date(), 
        "%Y"))) && !config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_SKIP_LARGE_VERSION_", 
        "FALSE"))) 
        out$version_with_large_components <- ver
    .aspell_package_description_for_CRAN <- function(dir, meta = NULL) {
        if (!is.null(meta)) {
            dir.create(dir <- tempfile(pattern = "aspell"))
            on.exit(unlink(dir, recursive = TRUE))
            .write_description(meta, file.path(dir, "DESCRIPTION"))
        }
        ignore <- list(c("(?<=[ \t[:punct:]])'[^']*'(?=[ \t[:punct:]])", 
            "(?<=[ \t[:punct:]])([[:alnum:]]+::)?[[:alnum:]_.]*\\(\\)(?=[ \t[:punct:]])", 
            "(?<=[<])(https?://|DOI:|doi:|arXiv:)[^>]+(?=[>])"), 
            perl = TRUE)
        utils:::aspell_package_description(dir, ignore = ignore, 
            control = c("--master=en_US", "--add-extra-dicts=en_GB"), 
            program = "aspell", dictionaries = "en_stats")
    }
    language <- meta["Language"]
    if ((is.na(language) || (language == "en") || startsWith(language, 
        "en-")) && config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_USE_ASPELL_", 
        "FALSE"))) {
        a <- tryCatch(.aspell_package_description_for_CRAN(dir), 
            error = identity)
        if (inherits(a, "error")) 
            out$aspell_package_description_error <- conditionMessage(a)
        else if (NROW(a)) 
            out$spelling <- a
    }
    parse_description_field <- function(desc, field, default) str_parse_logic(desc[field], 
        default = default)
    nms <- names(meta)
    stdNms <- .get_standard_DESCRIPTION_fields()
    nms <- nms[nms %notin% stdNms & !grepl(paste0("^(", paste(c("X-CRAN", 
        "X-schema.org", "Repository/R-Forge", "VCS/", "Config/"), 
        collapse = "|"), ")"), nms)]
    if (length(nms) && length(nms <- nms[nms %notin% paste0(stdNms, 
        "Note")])) 
        out$fields <- nms
    uses <- BUGS <- ACM <- character()
    for (field in c("Depends", "Imports", "Suggests")) {
        p <- strsplit(meta[field], " *, *")[[1L]]
        p2 <- grep("^(multicore|snow|doSNOW)( |\\(|$)", p, value = TRUE)
        uses <- c(uses, p2)
        p2 <- grep("^(BRugs|R2OpenBUGS|mzR|xcms|MSnbase)( |\\(|$)", 
            p, value = TRUE)
        BUGS <- c(BUGS, p2)
        p2 <- grep("^(Akima|tripack)( |\\(|$)", p, value = TRUE)
        ACM <- c(ACM, p2)
    }
    if (length(uses)) 
        out$uses <- sort(unique(gsub("[[:space:]]+", " ", uses)))
    if (length(BUGS)) 
        out$BUGS <- sort(unique(gsub("[[:space:]]+", " ", BUGS)))
    if (length(ACM)) 
        out$ACM <- sort(unique(gsub("[[:space:]]+", " ", ACM)))
    vds <- character()
    if (!is.na(meta["VignetteBuilder"])) {
        if (!file.exists(vds <- file.path(dir, "build", "vignette.rds"))) 
            out$missing_vignette_index <- TRUE
        else vds <- readRDS(vds)[, "File"]
    }
    Rdb <- tryCatch(.build_Rd_db(dir, stages = NULL, os = c("unix", 
        "windows"), step = 2), error = identity)
    if (inherits(Rdb, "error")) 
        out$Rd_db_build_error <- conditionMessage(Rdb)
    else if (length(Rdb)) {
        names(Rdb) <- substring(names(Rdb), nchar(file.path(dir, 
            "man")) + 2L)
        Rdb0 <- Rdb
        containsBuildSexprs <- which(vapply(Rdb, function(Rd) any(getDynamicFlags(Rd)["build"]), 
            NA))
        if (length(containsBuildSexprs)) {
            built_file <- file.path(dir, "build", "partial.rdb")
            if (!file.exists(built_file)) 
                out$missing_partial_rdb <- TRUE
            else {
                built <- readRDS(built_file)
                pos <- match(basename(names(Rdb)), names(built), 
                  0L)
                Rdb[pos > 0L] <- built[pos]
            }
        }
        containsLaterSexprs <- any(vapply(Rdb, function(Rd) any(.Rd_get_Sexpr_build_time_info(Rd)["later"]), 
            NA))
        if (containsLaterSexprs && !file.exists(file.path(dir, 
            "build", "stage23.rdb"))) 
            out$missing_stage23_rdb <- TRUE
        if (containsLaterSexprs && config_val_to_logical(Sys.getenv("_R_CHECK_NOTE_MISSING_MANUAL_PDF", 
            "FALSE")) && !file.exists(file.path(dir, "build", 
            paste0(meta[["Package"]], ".pdf")))) 
            out$missing_manual_pdf <- TRUE
        .fmt <- function(x) {
            Map(function(f, e) {
                e <- vapply(e, .Rd_deparse, "")
                c(paste0("  File ", sQuote(f), ":"), paste0("    ", 
                  gsub("\n", "\n      ", ifelse(nchar(e) < 50L, 
                    e, paste(substr(e, 1L, 50L), "[TRUNCATED]")))))
            }, names(x), x)
        }
        bad <- lapply(Rdb, function(Rd) {
            Rd <- Rd[RdTags(Rd) %in% c("\\keyword", "\\concept")]
            Rd[vapply(Rd, function(e) any(unlist(RdTags(e)) != 
                "TEXT"), NA)]
        })
        bad <- Filter(length, bad)
        if (length(bad)) 
            out$Rd_keywords_or_concepts_with_Rd_markup <- .fmt(bad)
        bad <- lapply(Rdb, function(Rd) {
            Rd <- Rd[RdTags(Rd) %in% c("\\keyword", "\\concept")]
            Rd[grepl("[,\n]", trimws(vapply(Rd, paste, "", collapse = "\n"))) & 
                !vapply(Rd, function(e) any(unlist(RdTags(e)) != 
                  "TEXT"), NA)]
        })
        bad <- Filter(length, bad)
        if (length(bad)) 
            out$Rd_keywords_or_concepts_more_than_one <- .fmt(bad)
        .fmt <- function(x) {
            Map(function(f, e) {
                c(paste0("  File ", sQuote(f), ":"), paste0("    ", 
                  e))
            }, names(x), x)
        }
        bad <- lapply(Rdb0, function(Rd) {
            grep("https?://(dx[.])?doi[.]org/10", .get_urls_from_Rd(Rd), 
                value = TRUE)
        })
        bad <- Filter(length, bad)
        if (length(bad)) 
            out$Rd_URLs_which_should_use_doi <- .fmt(bad)
    }
    vign_dir <- file.path(dir, "vignettes")
    if (length(vds)) {
        sources <- setdiff(list.files(file.path(dir, "inst", 
            "doc")), list.files(vign_dir))
        sources <- intersect(vds, sources)
    }
    else {
        pattern <- vignetteEngine("Sweave")$pattern
        sources <- setdiff(list.files(file.path(dir, "inst", 
            "doc"), pattern = pattern), list.files(vign_dir, 
            pattern = pattern))
    }
    if (length(sources)) {
        out$have_vignettes_dir <- dir.exists(vign_dir)
        out$vignette_sources_only_in_inst_doc <- sources
    }
    if (foss && !dir.exists(file.path(dir, "java"))) {
        allfiles <- list.files(file.path(dir, "inst"), full.names = TRUE, 
            recursive = TRUE)
        allfiles <- c(allfiles, list.files(file.path(dir, "exec"), 
            full.names = TRUE))
        javafiles <- grep(".*[.](class|jar)$", allfiles, value = TRUE)
        if (length(javafiles)) 
            out$javafiles <- javafiles
    }
    {
        dotjava <- list.files(file.path(dir, "inst"), pattern = ".*[.]java$", 
            full.names = TRUE, recursive = TRUE)
        dotjava <- c(dotjava, list.files(file.path(dir, "exec"), 
            pattern = ".*[.]java$", full.names = TRUE))
        if (length(dotjava)) 
            out$dotjava <- dotjava
    }
    .check_citation_for_CRAN <- function(cfile, meta) {
        libpaths <- .libPaths()
        .libPaths(character())
        on.exit(.libPaths(libpaths))
        out <- list()
        installed <- nzchar(system.file(package = meta["Package"]))
        if (installed) {
            ccalls <- .parse_code_file(cfile, meta["Encoding"])
            ind <- vapply(ccalls, function(e) {
                is.call(e) && (length(e) == 3L) && identical(deparse(e[[1L]]), 
                  "if") && identical(deparse(e[[2L]]), "!exists(\"meta\") || is.null(meta)")
            }, NA)
            if (any(ind)) 
                ccalls <- ccalls[!ind]
            ccalls <- .find_calls(ccalls, recursive = TRUE)
            cnames <- intersect(unique(.call_names(ccalls)), 
                c("packageDescription", "library", "require"))
            if (length(cnames)) 
                out$citation_calls <- cnames
        }
        .warnings <- character()
        cinfo <- withCallingHandlers(tryCatch(utils::readCitationFile(cfile, 
            meta), error = identity), warning = function(e) {
            .warnings <<- c(.warnings, conditionMessage(e))
            tryInvokeRestart("muffleWarning")
        })
        if (inherits(cinfo, "error")) {
            if (installed) 
                out$citation_error_reading_if_installed <- conditionMessage(cinfo)
            else out$citation_error_reading_if_not_installed <- conditionMessage(cinfo)
            return(out)
        }
        if (length(.warnings)) 
            out$citation_trouble_when_reading <- unique(.warnings)
        cfmt <- tryCatch(format(cinfo, style = "text"), warning = identity, 
            error = identity)
        if (inherits(cfmt, "condition")) 
            out$citation_problem_when_formatting <- conditionMessage(cfmt)
        if (!installed) {
            ccalls <- .find_calls(.parse_code_file(cfile, meta["Encoding"]), 
                recursive = TRUE)
        }
        cnames <- .call_names(ccalls)
        if (any(cnames %in% c("personList", "as.personList"))) 
            out$citation_has_calls_to_personList_et_al <- TRUE
        if (any(cnames == "citEntry")) 
            out$citation_has_calls_to_citEntry <- TRUE
        out
    }
    if (file.exists(cfile <- file.path(dir, "inst", "CITATION"))) {
        cinfo <- .check_citation_for_CRAN(cfile, meta)
        if (length(cinfo)) 
            out[names(cinfo)] <- cinfo
    }
    if (!is.na(aar <- meta["Authors@R"]) && !inherits(aar <- tryCatch(str2expression(aar), 
        error = identity), "error")) {
        bad <- ((length(aar) != 1L) || !is.call(aar <- aar[[1L]]))
        if (!bad) {
            cname <- as.character(aar[[1L]])
            bad <- ((cname != "person") && ((cname != "c") || 
                !all(vapply(aar[-1L], function(e) {
                  (is.call(e) && is.name(x <- e[[1L]]) && (as.character(x) == 
                    "person"))
                }, FALSE))))
        }
        if (bad) 
            out$authors_at_R_calls <- aar
        else {
            aar <- meta["Authors@R"]
            aut <- tryCatch(.eval_with_capture(utils:::.read_authors_at_R_field(aar)), 
                error = identity)
            if (!inherits(aut, "error") && length(msg <- aut$message)) 
                out$authors_at_R_message <- msg
        }
    }
    if (is.na(meta["Authors@R"])) {
        aar <- utils:::.authors_at_R_field_from_author_and_maintainer(meta["Author"], 
            maintainer)
        aar <- format(aar, style = "R")
        out$authors_at_R_missing <- paste(c("No Authors@R field in DESCRIPTION.", 
            "Please add one, modifying", paste(c("  Authors@R:", 
                rep.int(strrep(" ", 12L), length(aar) - 1L)), 
                aar), "as necessary."), collapse = "\n")
    }
    auth <- trimws(as.vector(meta["Author"]))
    if (grepl("^Author *:", auth)) 
        out$author_starts_with_Author <- TRUE
    if (grepl("^(Authors@R *:|person *\\(|c *\\()", auth)) 
        out$author_should_be_authors_at_R <- auth
    title <- trimws(as.vector(meta["Title"]))
    title <- gsub("[\n\t]", " ", title)
    package <- meta["Package"]
    if (tolower(title) == tolower(package)) {
        out$title_is_name <- TRUE
    }
    else {
        if (grepl(paste0("^", gsub(".", "[.]", package, fixed = TRUE), 
            "[ :]"), title, ignore.case = TRUE)) 
            out$title_includes_name <- TRUE
        language <- meta["Language"]
        if (is.na(language) || (language == "en") || startsWith(language, 
            "en-")) {
            title2 <- toTitleCase(title)
            p <- "(^|(?<=[ \t[:punct:]]))'[^']*'($|(?=[ \t[:punct:]]))"
            m <- gregexpr(p, title, perl = TRUE)
            regmatches(title2, m) <- regmatches(title, m)
            if (title != title2) 
                out$title_case <- c(title, title2)
        }
    }
    descr <- trimws(as.vector(meta["Description"]))
    descr <- gsub("[\n\t]", " ", descr)
    package <- meta["Package"]
    if (grepl(paste0("^['\"]?", package), ignore.case = TRUE, 
        descr)) 
        out$descr_bad_start <- TRUE
    if (grepl("^(The|This|A|In this|In the) package", descr)) 
        out$descr_bad_start <- TRUE
    if (!isTRUE(out$descr_bad_start) && !grepl("^['\"]?[[:upper:]]", 
        descr)) 
        out$descr_bad_initial <- TRUE
    descr <- strwrap(descr)
    if (any(ind <- grepl("(^|[^<])https?://", descr))) {
        out$descr_bad_URLs <- descr[ind]
    }
    if (any(ind <- grepl(paste(c("https?:.*doi.org/", "(^|[^<])doi:", 
        "<doi[^:]", "<10[.]"), collapse = "|"), descr, ignore.case = TRUE))) 
        out$descr_bad_DOIs <- descr[ind]
    else if (any(ind <- grepl("<https?:.*/10\\.\\d{4,}/.*?>", 
        descr, ignore.case = TRUE))) 
        out$descr_replace_by_DOI <- descr[ind]
    if (any(ind <- grepl(paste(c("<(arXiv|arxiv):(([[:alpha:].-]+/)?[[:digit:].]+)(v[[:digit:]]+)?([[:space:]]*\\[[^]]+\\])?>", 
        "https?://arxiv.org", "(^|[^<])arxiv:", "<arxiv[^:]"), 
        collapse = "|"), descr, ignore.case = TRUE))) 
        out$descr_bad_arXiv_ids <- descr[ind]
    if (!is.na(v <- meta["URL"]) && length(z <- .bad_DESCRIPTION_URL_field_parts(v))) 
        out$url_field_parts <- z
    if (!is.na(v <- meta["BugReports"])) {
        z <- parse_URI_reference(v)
        if ((endsWith(tolower(z$authority), "github.com") || 
            endsWith(tolower(z$authority), "gitlab.com")) && 
            basename(z$path) != "issues") {
            w <- sprintf("%s/issues", sub("/$", "", v))
            out$bugreports <- paste(c("The BugReports field in DESCRIPTION has", 
                sprintf("  %s", v), "which should likely be", 
                sprintf("  %s", w), "instead."), collapse = "\n")
        }
    }
    skip_dates <- config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_SKIP_DATES_", 
        "FALSE"))
    date <- trimws(as.vector(meta["Date"]))
    if (!is.na(date)) {
        dd <- strptime(date, "%Y-%m-%d", tz = "GMT")
        if (is.na(dd)) 
            out$bad_date <- TRUE
        else if (!skip_dates && (as.Date(dd) < Sys.Date() - 31)) 
            out$old_date <- TRUE
    }
    ptime <- trimws(as.vector(meta["Packaged"]))
    if (is.na(ptime)) {
        out$build_time_stamp_msg <- "The build time stamp is missing."
    }
    else {
        ts <- strptime(ptime, "%Y-%m-%d", tz = "GMT")
        if (is.na(ts)) {
            out$build_time_stamp_msg <- "The build time stamp has invalid/outdated format."
        }
        else if (!skip_dates && (as.Date(ts) < Sys.Date() - 31)) {
            out$build_time_stamp_msg <- "This build time stamp is over a month old."
        }
    }
    placeholders <- c(if (!is.na(x <- tolower(meta["Title"])) && 
        startsWith(x, "what the package does")) x, if (!is.na(x <- meta["Author"]) && 
        (x == "Who wrote it")) x, if (!is.na(x <- meta["Maintainer"]) && 
        (startsWith(x, "Who to complain to") || startsWith(x, 
            "The package maintainer"))) x, if (!is.na(x <- tolower(meta["Description"])) && 
        (startsWith(x, "what the package does") || startsWith(x, 
            "more about what it does"))) x)
    if (length(placeholders)) 
        out$placeholders <- placeholders
    if (!is.na(enc <- meta["Encoding"]) && (enc != "UTF-8")) 
        out$encoding <- enc
    if (is.na(meta["Encoding"])) {
        find_non_ASCII_lines <- function(f) {
            x <- readLines(f, warn = FALSE)
            asc <- iconv(x, "latin1", "ASCII")
            ind <- is.na(asc) | asc != x
            if (any(ind)) {
                paste0(which(ind), ": ", iconv(x[ind], "latin1", 
                  "ASCII", sub = "byte"))
            }
            else character()
        }
        code_files <- c(file.path(dir, "NAMESPACE"), file.path(dir, 
            "inst", "CITATION"))
        code_files <- code_files[file.exists(code_files)]
        if (dir.exists(file.path(dir, "R"))) {
            OS_subdirs <- c("unix", "windows")
            code_files <- c(code_files, list_files_with_type(file.path(dir, 
                "R"), "code", OS_subdirs = OS_subdirs))
        }
        names(code_files) <- file_path_relative_to(code_files, 
            dir, parent = FALSE)
        lines <- Filter(length, lapply(code_files, find_non_ASCII_lines))
        if (length(lines)) 
            out$R_files_non_ASCII <- lines
    }
    if (file.exists(fp <- file.path(dir, "R", paste0(basename(dir), 
        "-internal.R")))) {
        exprs <- parse(fp)
        tst <- function(e) {
            is.call(e) && (length(s <- as.character(e[[1L]])) == 
                1L) && (s == "<-") && (length(s <- as.character(e[[2L]])) == 
                1L) && (s == ".Random.seed")
        }
        if (any(vapply(exprs, tst, NA))) 
            out$R_files_set_random_seed <- basename(fp)
    }
    if (!is.na(size <- as.numeric(pkgSize)) && size > as.numeric(Sys.getenv("_R_CHECK_CRAN_INCOMING_TARBALL_THRESHOLD_", 
        unset = "5e6"))) 
        out$size_of_tarball <- size
    remote <- (!localOnly && !config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_SKIP_URL_CHECKS_IF_REMOTE_", 
        "FALSE")))
    check_urls_in_parallel <- config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_CHECK_URLS_IN_PARALLEL_", 
        "FALSE"))
    if (!capabilities("libcurl") && remote) 
        out$no_url_checks <- TRUE
    else if (is.null(out$Rd_db_build_error)) {
        udb <- url_db_from_package_sources(dir)
        bad <- tryCatch(check_url_db(udb, remote = remote, parallel = check_urls_in_parallel), 
            error = identity)
        if (inherits(bad, "error")) {
            out$bad_urls <- bad
        }
        else if (NROW(bad)) {
            prefix <- "https://cran.r-project.org/package="
            ncp <- nchar(prefix)
            ind <- ((substring(tolower(bad$URL), 1L, ncp) == 
                prefix) & (substring(bad$URL, ncp + 1L) == package))
            if (any(ind)) 
                bad <- bad[!ind, ]
            prefix <- "http://cran.r-project.org/package="
            ncp <- nchar(prefix)
            ind <- ((substring(tolower(bad$URL), 1L, ncp) == 
                prefix) & (substring(bad$URL, ncp + 1L) == package))
            if (any(ind)) 
                bad[ind, c("Status", "Message")] <- ""
            if (NROW(bad)) 
                out$bad_urls <- bad
        }
        if (config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_CHECK_FILE_URIS_", 
            "FALSE"))) {
            urls <- udb$URL
            parts <- parse_URI_reference(urls)
            ind <- (parts[, "scheme"] %in% c("", "file"))
            fpaths1 <- fpaths0 <- parts[ind, "path"]
            parents <- udb[ind, "Parent"]
            if (any(ind <- (startsWith(fpaths0, "../") & grepl("^(inst/doc|man|demo)", 
                parents)))) {
                foo <- rep.int("/library/<pkg>/<sub>", sum(ind))
                bar <- fpaths0[ind]
                while (length(pos <- which(startsWith(bar, "../")))) {
                  foo[pos] <- dirname(foo[pos])
                  bar[pos] <- substring(bar[pos], 4L)
                }
                fpaths1[ind] <- foo
            }
            fpaths1[grepl("^(/doc/html|/demo|/library)", fpaths1)] <- ""
            fpaths1[(fpaths1 == "index.html") & startsWith(parents, 
                "inst/doc")] <- ""
            ppaths <- dirname(parents)
            pos <- which(!file.exists(file.path(ifelse(nzchar(ppaths), 
                file.path(dir, ppaths), dir), fpaths1)))
            if (length(pos)) 
                out$bad_file_URIs <- cbind(fpaths0[pos], parents[pos])
        }
        if (remote) {
            pat <- "<(arXiv|arxiv):(([[:alpha:].-]+/)?[[:digit:].]+)(v[[:digit:]]+)?([[:space:]]*\\[[^]]+\\])?>"
            dsc <- meta["Description"]
            ids <- .gregexec_at_pos(pat, dsc, gregexpr(pat, dsc), 
                3L)
            if (length(ids)) {
                ini <- "10.48550/arXiv."
                ddb <- doi_db(paste0(ini, ids), rep.int("DESCRIPTION", 
                  length(ids)))
                bad <- tryCatch(check_doi_db(ddb, parallel = check_urls_in_parallel), 
                  error = identity)
                if (!inherits(bad, "error") && length(bad)) 
                  out$bad_arXiv_ids <- substring(bad$DOI, nchar(ini) + 
                    1L)
            }
            odb <- .ORCID_iD_db_from_package_sources(dir)
            if (NROW(odb)) {
                ind <- grepl(.ORCID_iD_variants_regexp, odb[, 
                  1L])
                odb <- odb[ind, , drop = FALSE]
            }
            if (NROW(odb) && requireNamespace("curl", quietly = TRUE)) {
                ids <- .ORCID_iD_canonicalize(odb[, 1L])
                pos <- which(!.ORCID_iD_is_alive(ids))
                if (length(pos)) 
                  out$bad_ORCID_iDs <- odb[pos, , drop = FALSE]
            }
        }
    }
    if (localOnly) 
        return(out)
    urls <- .get_standard_repository_URLs()
    if (foss) {
        available <- utils::available.packages(utils::contrib.url(urls, 
            "source"), filters = c("R_version", "duplicates"))
        package <- meta["Package"]
        depends <- c("Depends", "Imports", "LinkingTo")
        if (package %in% rownames(available)) {
            available[package, depends] <- meta[depends]
        }
        else {
            entry <- rbind(meta[colnames(available)])
            rownames(entry) <- package
            available <- rbind(available, entry)
        }
        ldb <- analyze_licenses(available[, "License"], available)
        depends <- unlist(package_dependencies(package, available, 
            recursive = TRUE))
        ru <- ldb$restricts_use
        pnames_restricts_use_TRUE <- rownames(available)[!is.na(ru) & 
            ru]
        pnames_restricts_use_NA <- rownames(available)[is.na(ru)]
        bad <- intersect(depends, pnames_restricts_use_TRUE)
        if (length(bad)) 
            out$depends_with_restricts_use_TRUE <- bad
        bad <- intersect(depends, pnames_restricts_use_NA)
        if (length(bad)) 
            out$depends_with_restricts_use_NA <- bad
        bv <- parse_description_field(meta, "BuildVignettes", 
            TRUE)
        if (!bv) 
            out$foss_with_BuildVignettes <- TRUE
    }
    .repository_db <- function(u) {
        con <- gzcon(url(sprintf("%s/src/contrib/PACKAGES.gz", 
            u), "rb"))
        on.exit(close(con))
        cbind(read.dcf(con, c(.get_standard_repository_db_fields(), 
            "Path")), Repository = u)
    }
    db <- tryCatch(lapply(urls, .repository_db), error = identity)
    if (inherits(db, "error")) {
        message("NB: need Internet access to use CRAN incoming checks")
        return(out)
    }
    db <- do.call(rbind, db)
    CRAN <- urls[1L]
    con <- url(sprintf("%s/src/contrib/PACKAGES.in", CRAN))
    odb <- read.dcf(con)
    close(con)
    entry <- odb[odb[, "Package"] == meta["Package"], ]
    entry <- entry[!is.na(entry) & (names(entry) %notin% c("Package", 
        "X-CRAN-History"))]
    if (length(entry)) {
        if (!is.na(iif <- lic_info$is_FOSS) && !is.na(lif <- entry["License_is_FOSS"]) && 
            ((lif == "yes") != iif)) 
            out$conflict_in_license_is_FOSS <- lif
        if (!is.na(iru <- lic_info$restricts_use) && !is.na(lru <- entry["License_restricts_use"]) && 
            ((lru == "yes") != iru)) 
            out$conflict_in_license_restricts_use <- lru
        fmt <- function(s) unlist(lapply(s, function(e) {
            paste(strwrap(e, indent = 2L, exdent = 4L), collapse = "\n")
        }))
        nms <- names(entry)
        entry <- fmt(sprintf("  %s: %s", nms, entry))
        names(entry) <- nms
        out$overrides <- entry
        fields <- intersect(names(meta), nms)
        if (length(fields)) {
            ind <- !unlist(Map(identical, fmt(sprintf("  %s: %s", 
                fields, meta[fields])), entry[fields]))
            if (any(ind)) 
                out$conflicts <- fields[ind]
        }
    }
    archive_db <- CRAN_archive_db()
    packages_in_CRAN_archive <- names(archive_db)
    package <- meta["Package"]
    packages <- db[, "Package"]
    if (package %notin% packages) 
        out$new_submission <- TRUE
    clashes <- character()
    pos <- which((tolower(packages) == tolower(package)) & (packages != 
        package))
    if (length(pos)) 
        clashes <- sprintf("%s [%s]", packages[pos], db[pos, 
            "Repository"])
    if (length(packages_in_CRAN_archive)) {
        pos <- which((tolower(packages_in_CRAN_archive) == tolower(package)) & 
            (packages_in_CRAN_archive != package))
        if (length(pos)) {
            clashes <- c(clashes, sprintf("%s [CRAN archive]", 
                packages_in_CRAN_archive[pos]))
        }
    }
    if (length(clashes)) 
        out$bad_package <- list(package, clashes)
    repositories <- db[(packages == package) & (db[, "Repository"] != 
        CRAN), "Repository"]
    if (length(repositories)) 
        out$repositories <- repositories
    strong_dependencies <- setdiff(unique(c(.extract_dependency_package_names(meta["Depends"]), 
        .extract_dependency_package_names(meta["Imports"]), .extract_dependency_package_names(meta["LinkingTo"]))), 
        c(.get_standard_package_names()$base, db[, "Package"]))
    if (length(strong_dependencies)) {
        out$strong_dependencies_not_in_mainstream_repositories <- strong_dependencies
    }
    suggests_or_enhances <- setdiff(unique(c(.extract_dependency_package_names(meta["Suggests"]), 
        .extract_dependency_package_names(meta["Enhances"]))), 
        c(.get_standard_package_names()$base, db[, "Package"]))
    if (length(suggests_or_enhances)) {
        out$suggests_or_enhances_not_in_mainstream_repositories <- suggests_or_enhances
    }
    if (!is.na(aurls <- meta["Additional_repositories"])) {
        aurls <- .read_additional_repositories_field(aurls)
        adb <- tryCatch(lapply(aurls, function(u) {
            utils::available.packages(utils::contrib.url(u, "source"), 
                filters = c("R_version", "duplicates"))
        }), error = identity)
        if (inherits(adb, "error")) {
            out$additional_repositories_analysis_failed_with <- conditionMessage(adb)
        }
        else {
            ind <- vapply(adb, NROW, 0L) == 0L
            if (any(ind)) 
                out$additional_repositories_with_no_packages <- aurls[ind]
            adb <- do.call(rbind, adb)
            adb <- utils:::available_packages_filters_db$duplicates(adb)
            dependencies <- unique(c(strong_dependencies, suggests_or_enhances))
            pos <- match(dependencies, rownames(adb), nomatch = 0L)
            ind <- (pos > 0L)
            tab <- matrix(character(), nrow = 0L, ncol = 3L)
            if (any(ind)) 
                tab <- rbind(tab, cbind(dependencies[ind], "yes", 
                  adb[pos[ind], "Repository"]))
            ind <- !ind
            if (any(ind)) 
                tab <- rbind(tab, cbind(dependencies[ind], "no", 
                  "?"))
            unused <- character()
            for (u in aurls) {
                cu <- utils::contrib.url(u, "source")
                ind <- startsWith(tab[, 3L], cu)
                if (any(ind)) {
                  tab[ind, 3L] <- u
                }
                else {
                  unused <- c(unused, u)
                }
            }
            if (length(unused)) 
                tab <- rbind(tab, cbind("?", "?", unused))
            dimnames(tab) <- NULL
            out$additional_repositories_analysis_results <- tab
        }
    }
    if (capabilities("libcurl") && !config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_SKIP_DOI_CHECKS_", 
        "FALSE"))) {
        bad <- tryCatch(check_doi_db(doi_db_from_package_sources(dir, 
            Rd = TRUE), parallel = check_urls_in_parallel), error = identity)
        if (inherits(bad, "error") || NROW(bad)) 
            out$bad_dois <- bad
    }
    db <- db[(packages == package) & (db[, "Repository"] == CRAN) & 
        is.na(db[, "Path"]), , drop = FALSE]
    if (!NROW(db)) {
        if (package %in% packages_in_CRAN_archive) {
            out$CRAN_archive <- TRUE
            v_m <- package_version(meta["Version"])
            v_a <- sub("^.*_(.*)\\.tar.gz$", "\\1", basename(rownames(archive_db[[package]])))
            v_a <- max(package_version(v_a, strict = FALSE), 
                na.rm = TRUE)
            if (v_m <= v_a) 
                out$bad_version <- list(v_m, v_a)
        }
        if (!foss) 
            out$bad_license <- meta["License"]
        return(out)
    }
    v_m <- package_version(meta["Version"])
    v_d <- max(package_version(db[, "Version"]))
    if ((v_m <= v_d) && !config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_SKIP_VERSIONS_", 
        "FALSE"))) 
        out$bad_version <- list(v_m, v_d)
    if ((v_m$major == v_d$major) && (v_m$minor >= v_d$minor + 
        10)) 
        out$version_with_jump_in_minor <- list(v_m, v_d)
    current_db <- CRAN_current_db()
    mtimes <- c(current_db[match(package, sub("_.*", "", rownames(current_db)), 
        nomatch = 0L), "mtime"], archive_db[[package]]$mtime)
    if (length(mtimes)) {
        deltas <- Sys.Date() - as.Date(sort(mtimes, decreasing = TRUE))
        recency <- as.numeric(deltas[1L])
        if (recency < 7) 
            out$recency <- recency
        frequency <- sum(deltas <= 180)
        if (frequency > 6) 
            out$frequency <- frequency
    }
    db <- tryCatch(CRAN_package_db(), error = identity)
    if (inherits(db, "error")) 
        return(out)
    meta1 <- db[db[, "Package"] == package, ]
    meta0 <- unlist(meta1[1L, ])
    m_m <- as.vector(meta["Maintainer"])
    m_d <- meta0["Maintainer"]
    m_m_1 <- gsub("[[:space:]]+", " ", m_m)
    m_d_1 <- gsub("[[:space:]]+", " ", m_d)
    if (!all(m_m_1 == m_d_1)) {
        if (Encoding(m_m) == "latin1") 
            m_m <- iconv(m_m, "latin1")
        out$new_maintainer <- list(m_m, m_d)
    }
    l_d <- meta0["License"]
    if (!foss && analyze_license(l_d)$is_verified) 
        out$new_license <- list(meta["License"], l_d)
    if (config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_NOTE_GNU_MAKE_", 
        "FALSE"))) {
        SysReq <- meta["SystemRequirements"]
        if (!is.na(SysReq) && grepl("GNU [Mm]ake", SysReq)) {
            out$GNUmake <- TRUE
        }
    }
    if (!inherits(year <- tryCatch(format(as.Date(meta0["Published"]), 
        "%Y"), error = identity), "error")) {
        if (NROW(a <- out$spelling) && config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_ASPELL_RECHECK_MAYBE_", 
            "TRUE")) && (year >= as.numeric(Sys.getenv("_R_CHECK_CRAN_INCOMING_ASPELL_RECHECK_START_", 
            "2013")))) {
            a0 <- .aspell_package_description_for_CRAN(meta = meta0)
            out$spelling <- a[a$Original %notin% a0$Original, 
                ]
        }
        if (NROW(out$title_includes_name) && config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_TITLE_INCLUDES_NAME_RECHECK_MAYBE_", 
            "TRUE")) && (year >= as.numeric(Sys.getenv("_R_CHECK_CRAN_INCOMING_TITLE_INCLUDES_NAME_RECHECK_START_", 
            "2016"))) && meta0["Title"] == meta["Title"]) {
            out$title_includes_name <- NULL
        }
        if (NROW(out$title_case) && config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_TITLE_CASE_RECHECK_MAYBE_", 
            "TRUE")) && (year >= as.numeric(Sys.getenv("_R_CHECK_CRAN_INCOMING_TITLE_CASE_RECHECK_START_", 
            "2016"))) && meta0["Title"] == meta["Title"]) {
            out$title_case <- NULL
        }
        if (NROW(out$descr_bad_start) && config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_DESCR_BAD_START_RECHECK_MAYBE_", 
            "TRUE")) && (year >= as.numeric(Sys.getenv("_R_CHECK_CRAN_INCOMING_DESCR_BAD_START_RECHECK_START_", 
            "2016")))) {
            descr0 <- trimws(as.vector(meta0["Description"]))
            descr0 <- gsub("[\n\t]", " ", descr0)
            if (grepl(paste0("^['\"]?", package), ignore.case = TRUE, 
                descr0) || grepl("^(The|This|A|In this|In the) package", 
                descr0)) {
                out$descr_bad_start <- NULL
            }
        }
        if (NROW(out$GNUmake) && config_val_to_logical(Sys.getenv("_R_CHECK_CRAN_INCOMING_GNU_MAKE_RECHECK_MAYBE_", 
            "TRUE")) && (year >= as.numeric(Sys.getenv("_R_CHECK_CRAN_INCOMING_GNU_MAKE_RECHECK_START_", 
            "2015")))) {
            SysReq0 <- meta0["SystemRequirements"]
            if (!is.na(SysReq0) && grepl("GNU [Mm]ake", SysReq0)) {
                out$GNUmake <- NULL
            }
        }
    }
    out
}
