package org.prlprg.primitive;

import com.google.common.collect.ImmutableList;

public final class Names {
    public static final ImmutableList<String> BINOPS = ImmutableList.of(
            "+", "-", "*", "/", "^", "%%", "%/%",
            "==", "!=", "<", "<=", ">", ">=",
            "&", "|", "&&", "||",
            ":", "::", ":::",
            "$", "@",
            "~",
            "%%%",
            "%%",
            "%*%",
            "%o%",
            "%x%",
            "%in%",
            "%*%",
            "%/%",
            "%+%",
            "%-%",
            "%&%",
            "%/%",
            "%|%",
            "%?%",
            "%$%",
            "%::%",
            "%:::%",
            "%>%",
            "%<>%",
            "%<>%"
    );

    private Names() {
    }
}
