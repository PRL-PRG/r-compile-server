#? stdlib
`format.check_package_CRAN_incoming` <- function (x, ...) 
{
    fmt <- function(x) {
        if (length(x)) 
            paste(x, collapse = "\n")
        else character()
    }
    c(character(), if (length(x$Maintainer)) sprintf("Maintainer: %s", 
        sQuote(lines2str(x$Maintainer, " "))) else "No maintainer field in DESCRIPTION file", 
        fmt(c(if (isTRUE(x$Maintainer_invalid_or_multi_person)) "The maintainer field is invalid or specifies more than one person", 
            if (isTRUE(x$empty_Maintainer_name)) "The maintainer field lacks a name", 
            if (isTRUE(x$Maintainer_needs_quotes)) "The display-name part of the maintainer field should be enclosed in \"\"")), 
        if (length(x$new_submission)) "New submission", if (length(y <- x$bad_package)) sprintf("Conflicting package names (submitted: %s, existing: %s)", 
            y[[1L]], y[[2L]]), if (length(y <- x$repositories)) sprintf("Package duplicated from %s", 
            y), if (length(y <- x$CRAN_archive)) "Package was archived on CRAN", 
        fmt(c(if (length(y <- x$bad_version)) sprintf("Insufficient package version (submitted: %s, existing: %s)", 
            y[[1L]], y[[2L]]), if (length(y <- x$version_with_leading_zeroes)) sprintf("Version contains leading zeroes (%s)", 
            y), if (length(y <- x$version_with_large_components)) sprintf("Version contains large components (%s)", 
            y), if (length(y <- x$version_with_jump_in_minor)) sprintf("Version jumps in minor (submitted: %s, existing: %s)", 
            y[[1L]], y[[2L]]))), fmt(c(if (length(y <- x$recency)) sprintf("Days since last update: %d", 
            y), if (length(y <- x$frequency)) sprintf("Number of updates in past 6 months: %d", 
            y))), if (length(y <- x$new_maintainer)) paste(c("New maintainer:", 
            strwrap(y[[1L]], indent = 2L, exdent = 4L), "Old maintainer(s):", 
            strwrap(y[[2L]], indent = 2L, exdent = 4L)), collapse = "\n"), 
        fmt(c(if (length(y <- x$bad_license)) sprintf("Non-FOSS package license (%s)", 
            y), if (length(y <- x$new_license)) paste(c("Change to non-FOSS package license.", 
            "New license:", strwrap(y[[1L]], indent = 2L, exdent = 4L), 
            "Old license:", strwrap(y[[2L]], indent = 2L, exdent = 4L)), 
            collapse = "\n"), if (length(y <- x$extensions)) {
            paste(c("License components with restrictions and base license permitting such:", 
                paste0("  ", y), unlist(lapply(x$pointers, function(e) {
                  c(sprintf("File '%s':", e[1L]), paste0("  ", 
                    e[-1L]))
                }))), collapse = "\n")
        })), if (length(y <- x$aspell_package_description_error)) {
            paste(y, collapse = "\n")
        }, if (NROW(y <- x$spelling)) {
            s <- split(sprintf("%d:%d", y$Line, y$Column), y$Original)
            paste(c("Possibly misspelled words in DESCRIPTION:", 
                sprintf("  %s (%s)", names(s), lapply(s, paste, 
                  collapse = ", "))), collapse = "\n")
        }, if (isTRUE(x$foss_with_BuildVignettes)) {
            "FOSS licence with BuildVignettes: false"
        }, if (length(y <- x$fields)) {
            paste(c("Unknown, possibly misspelled, fields in DESCRIPTION:", 
                sprintf("  %s", paste(sQuote(y), collapse = " "))), 
                collapse = "\n")
        }, fmt(c(if (length(y <- x$overrides)) {
            paste(c("CRAN repository db overrides:", y), collapse = "\n")
        }, if (length(y <- x$conflicts)) {
            paste(sprintf("CRAN repository db conflicts: %s", 
                sQuote(y)), collapse = "\n")
        }, if (length(y <- x$conflict_in_license_is_FOSS)) {
            sprintf("Package license conflicts with %s override", 
                sQuote(paste("License_is_FOSS:", y)))
        }, if (length(y <- x$conflict_in_license_restricts_use)) {
            sprintf("Package license conflicts with %s override", 
                sQuote(paste("License_restricts_use:", y)))
        })), fmt(c(if (length(y <- x$depends_with_restricts_use_TRUE)) {
            paste(c("Package has a FOSS license but eventually depends on the following", 
                if (length(y) > 1L) "packages which restrict use:" else "package which restricts use:", 
                strwrap(paste(y, collapse = ", "), indent = 2L, 
                  exdent = 4L)), collapse = "\n")
        }, if (length(y <- x$depends_with_restricts_use_NA)) {
            paste(c("Package has a FOSS license but eventually depends on the following", 
                if (length(y) > 1L) "packages which may restrict use:" else "package which may restrict use:", 
                strwrap(paste(y, collapse = ", "), indent = 2L, 
                  exdent = 4L)), collapse = "\n")
        })), fmt(c(if (length(y <- x$strong_dependencies_not_in_mainstream_repositories)) {
            paste(c("Strong dependencies not in mainstream repositories:", 
                strwrap(paste(y, collapse = ", "), indent = 2L, 
                  exdent = 4L)), collapse = "\n")
        }, if (length(y <- x$suggests_or_enhances_not_in_mainstream_repositories)) {
            paste(c("Suggests or Enhances not in mainstream repositories:", 
                strwrap(paste(y, collapse = ", "), indent = 2L, 
                  exdent = 4L)), collapse = "\n")
        }, if (length(y <- x$additional_repositories_analysis_failed_with)) {
            paste(c("Using Additional_repositories specification failed with message:", 
                paste0("  ", y)), collapse = "\n")
        }, if (length(y <- x$additional_repositories_analysis_results)) {
            paste(c("Availability using Additional_repositories specification:", 
                sprintf("  %s   %s   %s", format(y[, 1L], justify = "left"), 
                  format(y[, 2L], justify = "right"), format(y[, 
                    3L], justify = "left"))), collapse = "\n")
        }, if (length(y <- x$additional_repositories_with_no_packages)) {
            paste(c("Additional repositories with no packages:", 
                paste0("  ", y)), collapse = "\n")
        })), if (length(y <- x$uses)) {
            paste(if (length(y) > 1L) "Uses the superseded packages:" else "Uses the superseded package:", 
                paste(sQuote(y), collapse = ", "))
        }, if (length(y <- x$BUGS)) {
            paste(if (length(y) > 1L) "Uses the non-portable packages:" else "Uses the non-portable package:", 
                paste(sQuote(y), collapse = ", "))
        }, if (length(y <- x$ACM)) {
            paste(if (length(y) > 1L) "Uses the ACM-licensed packages:" else "Uses the ACM-licensed package:", 
                paste(sQuote(y), collapse = ", "))
        }, if (length(y <- x$authors_at_R_calls)) {
            "Authors@R field should be a call to person(), or combine such calls."
        }, if (length(y <- x$authors_at_R_message)) {
            paste(c("Authors@R field gives persons with deprecated or bad elements:", 
                paste0("  ", y)), collapse = "\n")
        }, if (length(y <- x$authors_at_R_missing)) y, if (length(y <- x$author_starts_with_Author)) {
            "Author field starts with 'Author:'."
        }, if (length(y <- x$author_should_be_authors_at_R)) {
            paste(c("Author field should be Authors@R.  Current value is:", 
                paste0("  ", gsub("\n", "\n  ", y, fixed = TRUE))), 
                collapse = "\n")
        }, if (length(y <- x$vignette_sources_only_in_inst_doc)) {
            if (isFALSE(x$have_vignettes_dir)) paste(c("Vignette sources in 'inst/doc' with no 'vignettes' directory:", 
                strwrap(paste(sQuote(y), collapse = ", "), indent = 2L, 
                  exdent = 2L), "A 'vignettes' directory is required as from R 3.1.0"), 
                collapse = "\n") else paste(c("Vignette sources in 'inst/doc' missing from the 'vignettes' directory:", 
                strwrap(paste(sQuote(y), collapse = ", "), indent = 2L, 
                  exdent = 2L)), collapse = "\n")
        }, if (length(y <- x$missing_vignette_index)) {
            "Package has a VignetteBuilder field but no prebuilt vignette index."
        }, if (length(y <- x$Rd_db_build_error)) {
            paste(c("Reading Rd files failed with message:", 
                paste0("  ", y)), collapse = "\n")
        }, fmt(c(if (length(y <- x$missing_partial_rdb)) {
            paste(strwrap("Package has help file(s) containing build-stage \\Sexpr{} expressions but no 'build/partial.rdb' file."), 
                collapse = "\n")
        }, if (length(y <- x$missing_stage23_rdb)) {
            paste(strwrap("Package has help file(s) containing later-stage \\Sexpr{} expressions but no 'build/stage23.rdb' file."), 
                collapse = "\n")
        }, if (length(y <- x$missing_manual_pdf)) {
            paste(strwrap("Package has help file(s) containing install/render-stage \\Sexpr{} expressions but no prebuilt PDF manual."), 
                collapse = "\n")
        })), fmt(c(if (length(y <- x$dotjava)) {
            "Package installs .java files."
        }, if (length(y <- x$javafiles)) {
            "Package has FOSS license, installs .class/.jar but has no 'java' directory."
        })), fmt(c(if (length(y <- x$citation_calls)) {
            paste(c("Package CITATION file contains call(s) to:", 
                strwrap(paste(y, collapse = ", "), indent = 2L, 
                  exdent = 4L)), collapse = "\n")
        }, if (length(y <- x$citation_error_reading_if_installed)) {
            paste(c("Reading CITATION file fails with", paste0("  ", 
                gsub("\n", "\n  ", y))), collapse = "\n")
        }, if (length(y <- x$citation_error_reading_if_not_installed)) {
            paste(c("Reading CITATION file fails with", paste0("  ", 
                gsub("\n", "\n  ", y)), "when package is not installed."), 
                collapse = "\n")
        }, if (length(y <- x$citation_trouble_when_reading)) {
            paste(c("Problems when reading CITATION file:", paste0("  ", 
                y)), collapse = "\n")
        }, if (length(y <- x$citation_problem_when_formatting)) {
            paste(c("Problems when formatting CITATION entries:", 
                paste0("  ", y)), collapse = "\n")
        }, if (isTRUE(x$citation_has_calls_to_personList_et_al)) {
            paste(strwrap("Package CITATION file contains call(s) to old-style personList() or as.personList().  Please use c() on person objects instead."), 
                collapse = "\n")
        }, if (isTRUE(x$citation_has_calls_to_citEntry)) {
            paste(strwrap("Package CITATION file contains call(s) to old-style citEntry().  Please use bibentry() instead."), 
                collapse = "\n")
        })), fmt(c(if (length(y <- x$bad_urls)) {
            if (inherits(y, "error")) paste(c("Checking URLs failed with message:", 
                paste0("  ", conditionMessage(y))), collapse = "\n") else paste(c(if (length(y) > 
                1L) "Found the following (possibly) invalid URLs:" else "Found the following (possibly) invalid URL:", 
                paste0("  ", gsub("\n", "\n    ", format(y), 
                  fixed = TRUE))), collapse = "\n")
        }, if (length(y) && any(nzchar(z <- y$CRAN))) {
            ul <- tolower(z)
            indp <- (grepl("^https?://cran.r-project.org/web/packages", 
                ul) & !grepl("^https?://cran.r-project.org/web/packages/[.[:alnum:]_]+(html|pdf|rds)$", 
                ul))
            indv <- grepl("https?://cran.r-project.org/web/views/[[:alnum:]]+[.]html$", 
                ul)
            paste(c(if (any(indp)) {
                c("The canonical URL of the CRAN page for a package is ", 
                  "  https://CRAN.R-project.org/package=pkgname")
            }, if (any(indv)) {
                c("The canonical URL of the CRAN page for a task view is ", 
                  "  https://CRAN.R-project.org/view=viewname")
            }, if (any(nzchar(z) & !indp & !indv)) {
                "Canonical CRAN.R-project.org URLs use https."
            }), collapse = "\n")
        }, if (length(y) && any(nzchar(y$New)) && config_val_to_logical(Sys.getenv("_R_CHECK_URLS_SHOW_301_STATUS_", 
            "FALSE"))) {
            paste(strwrap("For content that is 'Moved Permanently', please change http to https, add trailing slashes, or replace the old by the new URL."), 
                collapse = "\n")
        }, if (length(y) && any(nzchar(y$Spaces))) {
            "  Spaces in an http[s] URL should probably be replaced by %20"
        }, if (length(y) && any(ind <- nzchar(z <- y$R))) {
            ul <- tolower(z[ind])
            elts <- unique(sub("^http://([^.]+)[.].*", "\\1", 
                ul))
            paste(sprintf("  Canonical %s.R-project.org URLs use https.", 
                elts), collapse = "\n")
        }, if (length(y <- x$no_url_checks) && y) {
            "Checking URLs requires 'libcurl' support in the R build."
        })), if (length(y <- x$bad_file_URIs)) {
            paste(c(if (NROW(y) > 1L) "Found the following (possibly) invalid file URIs:" else "Found the following (possibly) invalid file URI:", 
                sprintf("  URI: %s\n    From: %s", y[, 1L], y[, 
                  2L])), collapse = "\n")
        }, fmt(if (length(y <- x$bad_dois)) {
            if (inherits(y, "error")) paste(c("Checking DOIs failed with message:", 
                paste0("  ", conditionMessage(y))), collapse = "\n") else paste(c(if (length(y) > 
                1L) "Found the following (possibly) invalid DOIs:" else "Found the following (possibly) invalid DOI:", 
                paste0("  ", gsub("\n", "\n    ", format(y), 
                  fixed = TRUE))), collapse = "\n")
        }), fmt(if (length(y <- x$bad_arXiv_ids)) {
            paste(c(if (length(y) > 1L) "The Description field contains the following (possibly) invalid arXiv ids:" else "The Description field contains the following (possibly) invalid arXiv id:", 
                paste0("  ", gsub("\n", "\n    ", format(y), 
                  fixed = TRUE))), collapse = "\n")
        }), fmt(if (length(y <- x$bad_ORCID_iDs)) {
            paste(c(if (NROW(y) > 1L) "Found the following (possibly) invalid ORCID iDs:" else "Found the following (possibly) invalid ORCID iD:", 
                sprintf("  iD: %s\t(from: %s)", unlist(y[, 1L]), 
                  vapply(y[, 2L], paste, "", collapse = ", "))), 
                collapse = "\n")
        }), fmt(if (length(y <- x$encoding)) c(sprintf("Package encoding '%s' is deprecated.", 
            y), "Please change to UTF-8 for non-ASCII content.")), 
        if (length(y <- x$R_files_non_ASCII)) {
            paste(c("No package encoding and non-ASCII characters in the following R files:", 
                paste0("  ", names(y), "\n    ", vapply(y, paste, 
                  "", collapse = "\n    "), collapse = "\n")), 
                collapse = "\n")
        }, if (length(y <- x$R_files_set_random_seed)) {
            paste(c(sprintf("File '%s' sets .Random.seed.", file.path("R", 
                y)), "This is usually neither needed nor wanted."), 
                collapse = "\n")
        }, fmt(c(if (length(x$title_is_name)) {
            "The Title field is just the package name: provide a real title."
        }, if (length(x$title_includes_name)) {
            "The Title field starts with the package name."
        }, if (length(y <- x$title_case)) {
            paste(c("The Title field should be in title case. Current version is:", 
                paste0("  ", sQuote(y[1L])), "In title case that is:", 
                paste0("  ", sQuote(y[2L]))), collapse = "\n")
        })), fmt(c(if (length(x$descr_bad_initial)) {
            "The Description field should start with a capital letter."
        }, if (length(x$descr_bad_start)) {
            "The Description field should not start with the package name,\n  'This package' or similar."
        }, if (length(y <- x$descr_bad_URLs)) {
            paste(c("The Description field contains", paste0("  ", 
                y), "Please enclose URLs in angle brackets (<...>)."), 
                collapse = "\n")
        }, if (length(y <- x$descr_bad_DOIs)) {
            paste(c("The Description field contains", paste0("  ", 
                y), "Please write DOIs as <doi:prefix/suffix>."), 
                collapse = "\n")
        }, if (length(y <- x$descr_bad_arXiv_ids)) {
            paste(c("The Description field contains", paste0("  ", 
                y), "Please refer to arXiv e-prints via their arXiv DOI <doi:10.48550/arXiv.YYMM.NNNNN>."), 
                collapse = "\n")
        }, if (length(y <- x$descr_replace_by_DOI)) {
            paste(c("The Description field contains", paste0("  ", 
                y), "Please use permanent DOI markup for linking to publications as in <doi:prefix/suffix>."), 
                collapse = "\n")
        })), fmt(c(if (length(y <- x$url_field_parts)) {
            paste(c("The URL field contains the following bad parts:", 
                paste0("  ", y), strwrap("The URL field should be a list of URLs separated by commas or whitespace.")), 
                collapse = "\n")
        })), if (length(y <- x$bugreports)) y, fmt(c(if (length(x$GNUmake)) {
            "GNU make is a SystemRequirements."
        })), fmt(c(if (length(x$bad_date)) {
            "The Date field is not in ISO 8601 yyyy-mm-dd format."
        }, if (length(x$old_date)) {
            "The Date field is over a month old."
        })), if (length(y <- x$build_time_stamp_msg)) y, if (length(y <- x$placeholders)) {
            paste(c("DESCRIPTION fields with placeholder content:", 
                paste0("  ", unlist(strsplit(formatDL(y, style = "list", 
                  indent = 2L), "\n", fixed = TRUE)))), collapse = "\n")
        }, if (length(y <- x$size_of_tarball)) paste("Size of tarball:", 
            y, "bytes"), fmt(c(if (length(y <- x$Rd_keywords_or_concepts_with_Rd_markup)) paste(c("Found the following \\keyword or \\concept entries with Rd markup:", 
            unlist(y)), collapse = "\n"), if (length(y <- x$Rd_keywords_or_concepts_more_than_one)) paste(c("Found the following \\keyword or \\concept entries", 
            "which likely give several index terms:", unlist(y)), 
            collapse = "\n"))), fmt(c(if (length(y <- x$Rd_URLs_which_should_use_doi)) paste(c("Found the following URLs which should use \\doi (with the DOI name only):", 
            unlist(y)), collapse = "\n"))))
}
