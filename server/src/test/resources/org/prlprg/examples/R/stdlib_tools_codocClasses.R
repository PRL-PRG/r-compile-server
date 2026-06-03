#? stdlib
`codocClasses` <- function (package, lib.loc = NULL) 
{
    bad_Rd_objects <- structure(list(), class = "codocClasses")
    if (length(package) != 1L) 
        stop("argument 'package' must be of length 1")
    dir <- find.package(package, lib.loc)
    if (!dir.exists(file.path(dir, "R"))) 
        stop(gettextf("directory '%s' does not contain R code", 
            dir), domain = NA)
    if (!.haveRds(dir)) 
        stop(gettextf("directory '%s' does not contain Rd objects", 
            dir), domain = NA)
    is_base <- basename(dir) == "base"
    if (!is_base) 
        .load_package_quietly(package, dirname(dir))
    code_env <- .package_env(package)
    if (!.isMethodsDispatchOn()) 
        return(bad_Rd_objects)
    S4_classes <- methods::getClasses(code_env)
    if (!length(S4_classes)) 
        return(bad_Rd_objects)
    sApply <- function(X, FUN, ...) unlist(lapply(X = X, FUN = FUN, 
        ...), recursive = FALSE, use.names = FALSE)
    db <- Rd_db(package, lib.loc = dirname(dir))
    idx <- vapply(lapply(db, .Rd_get_doc_type), identical, NA, 
        "class", USE.NAMES = FALSE)
    if (!any(idx)) 
        return(bad_Rd_objects)
    db <- db[idx]
    stats <- c(n.S4classes = length(S4_classes), n.db = length(db))
    aliases <- lapply(db, .Rd_get_metadata, "alias")
    named_class <- lapply(aliases, endsWith, suffix = "-class")
    nClass <- sApply(named_class, sum)
    oneAlias <- lengths(aliases, use.names = FALSE) == 1L
    idx <- oneAlias | nClass == 1L
    if (!any(idx)) 
        return(bad_Rd_objects)
    db <- db[idx]
    stats["n.cl"] <- length(db)
    multi <- idx & !oneAlias
    aliases[multi] <- mapply(`[`, aliases[multi], named_class[multi], 
        SIMPLIFY = FALSE, USE.NAMES = FALSE)
    aliases <- unlist(aliases[idx], use.names = FALSE)
    Rd_slots <- lapply(db, .Rd_get_section, "Slots", FALSE)
    idx <- lengths(Rd_slots) > 0L
    if (!any(idx)) 
        return(bad_Rd_objects)
    db <- db[idx]
    aliases <- aliases[idx]
    Rd_slots <- Rd_slots[idx]
    stats["n.final"] <- length(db)
    db_names <- names(db)
    .get_slot_names <- function(x) {
        x <- .Rd_get_section(x, "describe")
        txt <- .Rd_get_item_tags(x)
        if (!length(txt)) 
            return(character())
        txt <- gsub("\\\\l?dots", "...", txt)
        txt <- gsub("\\\\code\\{([^}]*)\\}:?", "\\1", as.character(txt))
        txt <- unlist(strsplit(txt, ", *"))
        trimws(txt)
    }
    .inheritedSlotNames <- function(ext) {
        supcl <- methods::.selectSuperClasses(ext)
        unique(unlist(lapply(lapply(supcl, methods::getClassDef), 
            methods::slotNames), use.names = FALSE))
    }
    S4topics <- vapply(S4_classes, utils:::topicName, " ", type = "class", 
        USE.NAMES = FALSE)
    S4_checked <- S4_classes[has.a <- S4topics %in% aliases]
    idx <- match(S4topics[has.a], aliases)
    for (icl in seq_along(S4_checked)) {
        cl <- S4_checked[icl]
        cld <- methods::getClass(cl, where = code_env)
        ii <- idx[icl]
        scld <- methods::slotNames(cld)
        codeSlots <- if (!is.null(scld)) 
            sort(scld)
        else character()
        docSlots <- sort(.get_slot_names(Rd_slots[[ii]]))
        superSlots <- .inheritedSlotNames(cld@contains)
        if (length(superSlots)) 
            docSlots <- docSlots[docSlots %notin% c("...", "\\dots")]
        if (!all(docSlots %in% codeSlots) || !all(setdiff(codeSlots, 
            superSlots) %in% docSlots)) {
            bad_Rd_objects[[db_names[ii]]] <- list(name = cl, 
                code = codeSlots, inherited = superSlots, docs = docSlots)
        }
    }
    attr(bad_Rd_objects, "S4_classes_checked") <- S4_checked
    attr(bad_Rd_objects, "stats") <- stats
    bad_Rd_objects
}
