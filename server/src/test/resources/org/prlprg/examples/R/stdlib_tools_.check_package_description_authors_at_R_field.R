#? stdlib
`.check_package_description_authors_at_R_field` <- function (aar, strict = FALSE) 
{
    out <- list()
    if (is.na(aar)) 
        return(out)
    aar <- suppressWarnings(tryCatch(utils:::.read_authors_at_R_field(aar), 
        error = identity))
    if (inherits(aar, "error")) {
        out$bad_authors_at_R_field <- conditionMessage(aar)
    }
    else {
        s <- tryCatch(utils:::.format_authors_at_R_field_for_author(aar), 
            error = identity)
        if (inherits(s, "error")) {
            out$bad_authors_at_R_field_for_author <- conditionMessage(s)
        }
        else {
            if (s == "") 
                out$bad_authors_at_R_field_has_no_author <- TRUE
            else {
                attr(out, "Author") <- s
                if (strict >= 1L) {
                  has_no_name <- vapply(aar, function(e) is.null(e$given) && 
                    is.null(e$family), NA)
                  if (any(has_no_name)) {
                    out$bad_authors_at_R_field_has_persons_with_no_name <- format(aar[has_no_name])
                  }
                  has_no_role <- vapply(aar, function(e) is.null(e$role), 
                    NA)
                  if (any(has_no_role)) {
                    out$bad_authors_at_R_field_has_persons_with_no_role <- format(aar[has_no_role])
                  }
                }
                if (strict >= 2L) {
                  if (all(has_no_name | vapply(aar, function(e) "aut" %notin% 
                    e$role, NA))) 
                    out$bad_authors_at_R_field_has_no_author_roles <- TRUE
                  ids <- .ORCID_iD_from_person(aar)
                  pos <- which(!is.na(ids))
                  ids <- ids[pos]
                  pos <- pos[!.ORCID_iD_is_valid(ids)]
                  if (length(pos)) 
                    out$bad_authors_at_R_field_has_persons_with_bad_ORCID_identifiers <- format(aar[pos])
                  ids <- ids[duplicated(ids)]
                  if (length(ids)) 
                    out$bad_authors_at_R_field_has_persons_with_dup_ORCID_identifiers <- ids
                }
                if (strict >= 3L) {
                  non_standard_roles <- lapply(aar$role, setdiff, 
                    utils:::MARC_relator_db_codes_used_with_R)
                  ind <- lengths(non_standard_roles) > 0L
                  if (any(ind)) {
                    out$authors_at_R_field_has_persons_with_nonstandard_roles <- sprintf("%s: %s", 
                      format(aar[ind]), vapply(non_standard_roles[ind], 
                        paste, collapse = ", ", FUN.VALUE = ""))
                  }
                }
            }
        }
        s <- tryCatch(utils:::.format_authors_at_R_field_for_maintainer(aar), 
            error = identity)
        if (inherits(s, "error")) {
            out$bad_authors_at_R_field_for_maintainer <- conditionMessage(s)
        }
        else {
            bad <- FALSE
            p <- Filter(function(e) "cre" %in% e$role, aar)
            if (length(p) > 1L) {
                bad <- TRUE
                out$bad_authors_at_R_field_too_many_maintainers <- format(p)
            }
            p <- Filter(function(e) {
                (!is.null(e$given) || !is.null(e$family)) && 
                  !is.null(e$email)
            }, p)
            if (!length(p)) {
                bad <- TRUE
                out$bad_authors_at_R_field_has_no_valid_maintainer <- TRUE
            }
            if (!bad) 
                attr(out, "Maintainer") <- s
        }
    }
    out
}
