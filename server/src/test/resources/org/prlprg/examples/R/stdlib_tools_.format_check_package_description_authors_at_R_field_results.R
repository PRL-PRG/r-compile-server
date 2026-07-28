#? stdlib
`.format_check_package_description_authors_at_R_field_results` <- function (x) 
{
    c(character(), if (length(bad <- x[["bad_authors_at_R_field"]])) {
        c(gettext("Malformed Authors@R field:"), paste0("  ", 
            bad))
    }, if (length(bad <- x[["bad_authors_at_R_field_for_author"]])) {
        c(gettext("Cannot extract Author field from Authors@R field:"), 
            paste0("  ", bad))
    }, if (length(x[["bad_authors_at_R_field_has_no_author"]])) {
        gettext("Authors@R field gives no person with name and roles.")
    }, if (length(bad <- x[["bad_authors_at_R_field_has_persons_with_no_name"]])) {
        c(gettext("Authors@R field gives persons with no name:"), 
            paste0("  ", bad))
    }, if (length(bad <- x[["bad_authors_at_R_field_has_persons_with_no_role"]])) {
        c(gettext("Authors@R field gives persons with no role:"), 
            paste0("  ", bad))
    }, if (length(x[["bad_authors_at_R_field_has_no_author_roles"]])) {
        gettext("Authors@R field gives no person with name and author role")
    }, if (length(bad <- x[["bad_authors_at_R_field_for_maintainer"]])) {
        c(gettext("Cannot extract Maintainer field from Authors@R field:"), 
            paste0("  ", bad))
    }, if (length(bad <- x[["bad_authors_at_R_field_too_many_maintainers"]])) {
        c(gettext("Authors@R field gives more than one person with maintainer role:"), 
            paste0("  ", bad))
    }, if (length(x[["bad_authors_at_R_field_has_no_valid_maintainer"]])) {
        strwrap(gettext("Authors@R field gives no person with maintainer role, valid email address and non-empty name."))
    }, if (length(bad <- x[["bad_authors_at_R_field_has_persons_with_bad_ORCID_identifiers"]])) {
        c(gettext("Authors@R field gives persons with invalid ORCID identifiers:"), 
            paste0("  ", bad))
    }, if (length(bad <- x[["bad_authors_at_R_field_has_persons_with_dup_ORCID_identifiers"]])) {
        c(gettext("Authors@R field gives persons with duplicated ORCID identifiers:"), 
            paste0("  ", bad))
    })
}
