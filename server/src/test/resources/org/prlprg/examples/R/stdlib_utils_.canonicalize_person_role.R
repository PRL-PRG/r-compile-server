#? stdlib
`.canonicalize_person_role` <- function (role) 
{
    pos <- which(is.na(match(role, MARC_relator_db$code)))
    if (length(pos)) {
        ind <- pmatch(tolower(role[pos]), tolower(MARC_relator_db$name), 
            0L)
        role[pos[ind > 0L]] <- MARC_relator_db$code[ind]
        if (any(ind <- (ind == 0L))) {
            warning(sprintf(ngettext(length(pos[ind]), "Invalid role specification: %s.", 
                "Invalid role specifications: %s."), paste(sQuote(role[pos[ind]]), 
                collapse = ", ")), domain = NA)
            role <- role[-pos[ind]]
        }
    }
    role
}
