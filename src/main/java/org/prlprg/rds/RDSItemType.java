package org.prlprg.rds;

import org.prlprg.sexp.SEXPType;

sealed interface RDSItemType {
    int i();

    default boolean isSexp(SEXPType type) {
        return (this instanceof Sexp s && s.sexp() == type) || (this == Special.NILVALUE_SXP && type == SEXPType.NIL);
    }

    static RDSItemType valueOf(int i) {
        // These will never change so we don't have to worry about code synchronization
        return switch (i) {
            case 255 -> Special.REFSXP;
            case 254 -> Special.NILVALUE_SXP;
            case 253 -> Special.GLOBALENV_SXP;
            case 252 -> Special.UNBOUNDVALUE_SXP;
            case 251 -> Special.MISSINGARG_SXP;
            case 250 -> Special.BASENAMESPACE_SXP;
            case 249 -> Special.NAMESPACESXP;
            case 248 -> Special.PACKAGESXP;
            case 247 -> Special.PERSISTSXP;
            case 246 -> Special.CLASSREFSXP;
            case 245 -> Special.GENERICREFSXP;
            case 244 -> Special.BCREPDEF;
            case 243 -> Special.BCREPREF;
            case 242 -> Special.EMPTYENV_SXP;
            case 241 -> Special.BASEENV_SXP;
            case 240 -> Special.ATTRLANGSXP;
            case 239 -> Special.ATTRLISTSXP;
            default -> {
                try {
                    yield new Sexp(SEXPType.valueOf(i));
                } catch (IllegalArgumentException e) {
                    throw new IllegalArgumentException("Unknown RDS item type: " + i);
                }
            }
        };
    }

    record Sexp(SEXPType sexp) implements RDSItemType {
        @Override
        public int i() {
            return sexp.i;
        }
    }

    enum Special implements RDSItemType {
        REFSXP(255),
        NILVALUE_SXP(254),
        GLOBALENV_SXP(253),
        UNBOUNDVALUE_SXP(252),
        MISSINGARG_SXP(251),
        BASENAMESPACE_SXP(250),
        NAMESPACESXP(249),
        PACKAGESXP(248),
        PERSISTSXP(247),
        CLASSREFSXP(246),
        GENERICREFSXP(245),
        BCREPDEF(244),
        BCREPREF(243),
        EMPTYENV_SXP(242),
        BASEENV_SXP(241),
        ATTRLANGSXP(240),
        ATTRLISTSXP(239);

        private final int i;

        Special(int i) {
            this.i = i;
        }

        @Override
        public int i() {
            return i;
        }
    }
}
