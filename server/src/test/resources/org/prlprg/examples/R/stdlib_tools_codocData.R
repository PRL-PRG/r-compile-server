#? stdlib
`codocData` <- function (package, lib.loc = NULL) 
{
    bad_Rd_objects <- structure(list(), class = "codocData")
    if (length(package) != 1L) 
        stop("argument 'package' must be of length 1")
    dir <- find.package(package, lib.loc)
    db <- Rd_db(package, lib.loc = dirname(dir))
    is_base <- basename(dir) == "base"
    if (!is_base) 
        .load_package_quietly(package, dirname(dir))
    code_env <- .package_env(package)
    ns_env <- asNamespace(package)
    aliases <- lapply(db, .Rd_get_metadata, "alias")
    idx <- lengths(aliases) == 1L
    if (!any(idx)) 
        return(bad_Rd_objects)
    db <- db[idx]
    aliases <- aliases[idx]
    names(db) <- names(db)
    .get_var_names_from_item_tags <- function(s, nice = TRUE) {
        if (!length(s)) 
            return(character())
        nms <- character()
        s <- sub("^[[:space:]]*", "", sub("([[:space:]]*:)?[[:space:]]*$", 
            "", s))
        re <- "\\\\samp\\{(([^\\}]|[\\].)*)\\}([[:space:]]*,[[:space:]]*)?"
        m <- gregexpr(re, s)
        if (any(unlist(m) > -1)) {
            nms <- sub(re, "\\1", unlist(regmatches(s, m)))
            nms <- gsub("\\\\([{}%])", "\\1", nms)
            regmatches(s, m) <- ""
        }
        re <- "\\\\code\\{([^}]*)\\}([[:space:]]*,[[:space:]]*)?"
        m <- gregexpr(re, s)
        add <- regmatches(s, m)
        lens <- lengths(add)
        add <- sub(re, "\\1", unlist(add))
        if (nice) {
            ind <- rep.int(lens == 1L, lens)
            add[ind] <- trimws(add[ind])
        }
        nms <- c(nms, add)
        regmatches(s, m) <- ""
        nms <- c(nms, unlist(strsplit(s, "[[:space:]]*,[[:space:]]*")))
        nms
    }
    .get_data_frame_var_names <- function(x) {
        x <- x[RdTags(x) == "\\format"]
        if (length(x) != 1L) 
            return(character())
        x <- .Rd_drop_comments(x[[1L]])
        if (!grepl("^[[:space:]]*(A|This) data frame", .Rd_deparse(x, 
            tag = FALSE))) 
            return(character())
        x <- .Rd_get_section(x, "describe")
        x <- .Rd_get_item_tags(x)
        .get_var_names_from_item_tags(x)
    }
    Rd_var_names <- lapply(db, .get_data_frame_var_names)
    idx <- (lengths(Rd_var_names) > 0L)
    if (!length(idx)) 
        return(bad_Rd_objects)
    aliases <- unlist(aliases[idx])
    Rd_var_names <- Rd_var_names[idx]
    db_names <- names(db)[idx]
    data_env <- new.env(hash = TRUE)
    data_dir <- file.path(dir, "data")
    has_data <- dir.exists(data_dir) && !file_test("-f", file.path(data_dir, 
        "Rdata.rdb"))
    data_exts <- .make_file_exts("data")
    data_frames_checked <- character()
    for (i in seq_along(aliases)) {
        var_names_in_docs <- sort(Rd_var_names[[i]])
        al <- aliases[i]
        if (!is.null(A <- get0(al, envir = code_env, mode = "list", 
            inherits = FALSE))) 
            al <- A
        else if (!is_base && !is.null(A <- get0(al, envir = ns_env, 
            mode = "list", inherits = FALSE))) 
            al <- A
        else if (has_data) {
            if (!length(dir(data_dir) %in% paste(al, data_exts, 
                sep = "."))) {
                next
            }
            utils::data(list = al, envir = data_env)
            if (!is.null(A <- get0(al, envir = data_env, mode = "list", 
                inherits = FALSE))) 
                al <- A
            rm(list = ls(envir = data_env, all.names = TRUE), 
                envir = data_env)
        }
        if (!is.data.frame(al)) 
            next
        data_frames_checked <- c(data_frames_checked, aliases[i])
        var_names_in_code <- sort(names(al))
        if (!identical(var_names_in_code, var_names_in_docs)) 
            bad_Rd_objects[[db_names[i]]] <- list(name = aliases[i], 
                code = var_names_in_code, docs = var_names_in_docs)
    }
    attr(bad_Rd_objects, "data_frames_checked") <- as.character(data_frames_checked)
    bad_Rd_objects
}
