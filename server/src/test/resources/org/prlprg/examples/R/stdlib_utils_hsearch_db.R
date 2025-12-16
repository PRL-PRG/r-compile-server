#? stdlib
`hsearch_db` <- function (package = NULL, lib.loc = NULL, types = getOption("help.search.types"), 
    verbose = getOption("verbose"), rebuild = FALSE, use_UTF8 = FALSE) 
{
    WINDOWS <- .Platform$OS.type == "windows"
    if (is.logical(verbose)) 
        verbose <- 2 * as.integer(verbose)
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    i <- pmatch(types, hsearch_db_types)
    if (anyNA(i)) 
        stop("incorrect type specification")
    else types <- hsearch_db_types[i]
    db <- eval(.hsearch_db())
    if (is.null(db)) 
        rebuild <- TRUE
    else if (!rebuild) {
        if (!identical(lib.loc, attr(db, "LibPaths")) || anyNA(match(types, 
            attr(db, "Types"))) || any(attr(db, "mtime") < file.mtime(lib.loc[file.exists(lib.loc)])) || 
            !identical(attr(db, "ctype"), Sys.getlocale("LC_CTYPE"))) 
            rebuild <- TRUE
        if (!is.null(package) && any(is.na(match(package, db$Base[, 
            "Package"])))) 
            rebuild <- TRUE
    }
    if (rebuild) {
        if (verbose > 0L) {
            message("Rebuilding the help.search() database", 
                " ", "...", if (verbose > 1L) 
                  "...", domain = NA)
            flush.console()
        }
        want_type_help <- any(types == "help")
        want_type_demo <- any(types == "demo")
        want_type_vignette <- any(types == "vignette")
        if (!is.null(package)) {
            packages_in_hsearch_db <- package
            package_paths <- NULL
        }
        else {
            ans <- character(0L)
            paths <- character(0L)
            lib.loc <- lib.loc[file.exists(lib.loc)]
            valid_package_version_regexp <- .standard_regexps()$valid_package_version
            for (lib in lib.loc) {
                a <- list.files(lib, all.files = FALSE, full.names = FALSE)
                for (nam in a) {
                  pfile <- file.path(lib, nam, "Meta", "package.rds")
                  if (file.exists(pfile)) 
                    info <- readRDS(pfile)$DESCRIPTION[c("Package", 
                      "Version")]
                  else next
                  if ((length(info) != 2L) || anyNA(info)) 
                    next
                  if (!grepl(valid_package_version_regexp, info["Version"])) 
                    next
                  ans <- c(ans, nam)
                  paths <- c(paths, file.path(lib, nam))
                }
            }
            un <- !duplicated(ans)
            packages_in_hsearch_db <- ans[un]
            package_paths <- paths[un]
            names(package_paths) <- ans[un]
        }
        np <- 0L
        if (verbose >= 2L) {
            message("Packages {readRDS() sequentially}:", domain = NA)
            flush.console()
        }
        tot <- length(package_paths)
        incr <- 0L
        if (verbose && WINDOWS) {
            pb <- winProgressBar("R: creating the help.search() DB", 
                max = tot)
            on.exit(close(pb))
        }
        else if (verbose == 1L) 
            incr <- ifelse(tot > 500L, 100L, 10L)
        dbMat <- vector("list", length(packages_in_hsearch_db) * 
            4L)
        dim(dbMat) <- c(length(packages_in_hsearch_db), 4L)
        hDB0 <- tools:::.build_hsearch_index(NULL)
        for (p in packages_in_hsearch_db) {
            if (incr && np%%incr == 0L) {
                message(".", appendLF = FALSE, domain = NA)
                flush.console()
            }
            np <- np + 1L
            if (verbose && WINDOWS) 
                setWinProgressBar(pb, np)
            if (verbose >= 2L) {
                message(" ", p, appendLF = ((np%%5L) == 0L), 
                  domain = NA)
                flush.console()
            }
            path <- if (!is.null(package_paths)) 
                package_paths[p]
            else find.package(p, lib.loc, quiet = TRUE)
            if (length(path) == 0L) {
                if (is.null(package)) 
                  next
                else stop(packageNotFoundError(p, lib.loc, sys.call()))
            }
            hDB <- NULL
            if (want_type_help) {
                if (file.exists(hs_file <- file.path(path, "Meta", 
                  "hsearch.rds"))) {
                  hDB <- readRDS(hs_file)
                  if (!is.null(hDB)) {
                    if (is.na(match("Encoding", colnames(hDB[[1L]])))) 
                      hDB[[1L]] <- cbind(hDB[[1L]], Encoding = "")
                    for (i in seq_along(hDB)) {
                      colnames(hDB[[i]]) <- tools:::hsearch_index_colnames[[i]]
                    }
                  }
                  else if (verbose >= 2L) {
                    message(gettextf("package %s has empty hsearch data - strangely", 
                      sQuote(p)), domain = NA)
                    flush.console()
                  }
                }
                else if (!is.null(package)) 
                  warning("no hsearch.rds meta data for package ", 
                    p, domain = NA)
            }
            if (is.null(hDB)) 
                hDB <- hDB0
            nh <- NROW(hDB[[1L]])
            hDB[[1L]] <- cbind(hDB[[1L]], Type = rep.int("help", 
                nh))
            if (nh) 
                hDB[[1L]][, "LibPath"] <- path
            if (want_type_vignette) 
                hDB <- merge_vignette_index(hDB, path, p)
            if (want_type_demo) 
                hDB <- merge_demo_index(hDB, path, p)
            dbMat[np, seq_along(hDB)] <- hDB
        }
        if (verbose >= 2L) {
            message(ifelse(np%%5L == 0L, "\n", "\n\n"), sprintf("Built dbMat[%d,%d]", 
                nrow(dbMat), ncol(dbMat)), domain = NA)
            flush.console()
        }
        db <- list(Base = do.call(rbind, dbMat[, 1]), Aliases = do.call(rbind, 
            dbMat[, 2]), Keywords = do.call(rbind, dbMat[, 3]), 
            Concepts = do.call(rbind, dbMat[, 4]))
        rownames(db$Base) <- NULL
        if (is.null(db$Concepts)) {
            db$Concepts <- matrix(character(), ncol = 3L, dimnames = list(NULL, 
                tools:::hsearch_index_colnames$Concepts))
        }
        for (i in which(vapply(db, NROW, 0L) > 0L)) {
            db[[i]][, "ID"] <- paste(rep.int(seq_along(packages_in_hsearch_db), 
                vapply(dbMat[, i], NROW, 0L)), db[[i]][, "ID"], 
                sep = "/")
        }
        if (!identical(Sys.getlocale("LC_CTYPE"), "C")) {
            if (verbose >= 2L) {
                message("reencoding ...", appendLF = FALSE, domain = NA)
                flush.console()
            }
            encoding <- db$Base[, "Encoding"]
            target <- ifelse(use_UTF8 && !l10n_info()$`UTF-8`, 
                "UTF-8", "")
            for (enc in unique(encoding)) {
                if (enc != target) 
                  next
                IDs <- db$Base[encoding == enc, "ID"]
                for (i in seq_along(db)) {
                  ind <- db[[i]][, "ID"] %in% IDs
                  db[[i]][ind, ] <- iconv(db[[i]][ind, ], enc, 
                    "")
                }
            }
            if (verbose >= 2L) {
                message(" ", "done", domain = NA)
                flush.console()
            }
        }
        bad_IDs <- unlist(lapply(db, function(u) u[rowSums(is.na(nchar(u, 
            "chars", allowNA = TRUE, keepNA = FALSE))) > 0, "ID"]))
        if (length(bad_IDs)) {
            for (i in seq_along(db)) {
                ind <- db[[i]][, "ID"] %in% bad_IDs
                db[[i]][ind, ] <- iconv(db[[i]][ind, ], "latin1", 
                  "")
            }
            bad_IDs <- unlist(lapply(db, function(u) u[rowSums(is.na(nchar(u, 
                "chars", allowNA = TRUE, keepNA = FALSE))) > 
                0, "ID"]))
        }
        if (length(bad_IDs)) {
            warning("removing all entries with invalid multi-byte character data")
            for (i in seq_along(db)) {
                ind <- db[[i]][, "ID"] %in% bad_IDs
                db[[i]] <- db[[i]][!ind, , drop = FALSE]
            }
        }
        bad_IDs <- db$Base[is.na(db$Base[, "Topic"]), "ID"]
        if (length(bad_IDs)) {
            for (i in seq_along(db)) {
                ind <- db[[i]][, "ID"] %in% bad_IDs
                db[[i]] <- db[[i]][!ind, , drop = FALSE]
            }
        }
        ind <- nzchar(db$Keywords[, "Keyword"])
        db$Keywords <- db$Keywords[ind, , drop = FALSE]
        ind <- nzchar(db$Concepts[, "Concept"])
        db$Concepts <- db$Concepts[ind, , drop = FALSE]
        standard <- .get_standard_Rd_keywords_with_descriptions()
        keywords <- standard$Keywords
        concepts <- standard$Descriptions
        pos <- match(db$Keywords[, "Keyword"], keywords)
        ind <- !is.na(pos) & (keywords[pos] != "internal")
        db$Concepts <- rbind(db$Concepts, db$Keywords[is.na(pos), 
            , drop = FALSE], cbind(concepts[pos[ind]], db$Keywords[ind, 
            -1L, drop = FALSE]))
        db$Keywords <- db$Keywords[!is.na(pos), , drop = FALSE]
        db <- lapply(db, as.data.frame, stringsAsFactors = FALSE, 
            row.names = NULL)
        if (verbose >= 2L) {
            message("saving the database ...", appendLF = FALSE, 
                domain = NA)
            flush.console()
        }
        attr(db, "LibPaths") <- lib.loc
        attr(db, "mtime") <- Sys.time()
        attr(db, "ctype") <- Sys.getlocale("LC_CTYPE")
        attr(db, "Types") <- unique(c("help", types))
        class(db) <- "hsearch_db"
        .hsearch_db(db)
        if (verbose >= 2L) {
            message(" ", "done", domain = NA)
            flush.console()
        }
        if (verbose > 0L) {
            message("... database rebuilt", domain = NA)
            if (WINDOWS) {
                close(pb)
                on.exit()
            }
            flush.console()
        }
    }
    db
}
