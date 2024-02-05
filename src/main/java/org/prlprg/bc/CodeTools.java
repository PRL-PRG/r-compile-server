package org.prlprg.bc;

import org.prlprg.sexp.*;

import java.util.*;
import java.util.stream.Collectors;

public final class CodeTools {
    private CodeTools() {
    }

    public static Set<String> findLocals(Context cntx, SEXP... ex) {
        var shadowed = Set.of("quote", "expression", "local").stream().filter(x -> !cntx.baseVersion(x)).collect(Collectors.toSet());

        var locals = new HashSet<String>();
        var todo = new LinkedList<>(Arrays.asList(ex));

        // the code is following compiler:::findLocals1 from R
        while (!todo.isEmpty()) {
            var elem = todo.removeFirst();
            if (elem instanceof LangSXP l && l.fun() instanceof RegSymSXP s) {
                var local = switch (s.name()) {
                    case "=", "<-" -> {
                        var args = l.args().values();
                        todo.addAll(args.subList(1, args.size()));
                        yield getAssignedVar(l);
                    }
                    case "for" -> {
                        var args = l.args().values();
                        todo.addAll(args.subList(1, args.size()));

                        RegSymSXP sym = l.arg(0).value().cast();
                        yield Optional.of(sym.name());
                    }
                    case "assign", "delayedAssign" -> {
                        // The variable in assign and delayedAssign expressions is considered
                        // local if it is an explicit
                        // character string and there is no environment argument.
                        var args = l.args().values();
                        todo.addAll(args.subList(1, args.size()));

                        if (args.size() == 2 && args.getFirst() instanceof StrOrRegSymSXP v) {
                            yield Optional.of(v.reifyString());
                        } else {
                            yield Optional.<String>empty();
                        }
                    }
                    case "function" -> {
                        // Variables defined within local functions created by function expressions do not shadow globals
                        // within the containing expression and therefore function expressions do not contribute any new
                        // local variables.
                        yield Optional.<String>empty();
                    }
                    case "~", "expression", "quote" -> {
                        // they do not evaluate their arguments and so do not contribute new local variables.
                        if (locals.contains(s.name())) {
                            todo.addAll(l.args().values());
                        }
                        yield Optional.<String>empty();
                    }
                    case "local" -> {
                        // local calls without an environment argument create a new environment
                        // for evaluating their expression and do not add new local variables.
                        // If an environment argument is present then this might be the current
                        // environment and so assignments in the expression are considered to
                        // create possible local variables.
                        if (locals.contains(s.name()) || l.args().size() != 1) {
                            todo.addAll(l.args().values());
                        }
                        yield Optional.<String>empty();
                    }
                    default -> {
                        todo.addAll(l.args().values());
                        yield Optional.<String>empty();
                    }
                };
                local.ifPresent(locals::add);
            } else if (elem instanceof ListSXP l) {
                todo.addAll(l.values());
            }
        }

        return locals;
    }

    private static Optional<String> getAssignedVar(LangSXP l) {
        var v = l.arg(0).value();
        if (v == SEXPs.MISSING_ARG) {
            throw new CompilerException("Bad assignment: " + l);
        } else if (v instanceof StrOrRegSymSXP s) {
            return Optional.of(s.reifyString());
        } else {
            if (l.args().isEmpty()) {
                throw new CompilerException("Bad assignment: " + l);
            }
            switch (l.arg(0).value()) {
                case LangSXP ll -> {
                    return getAssignedVar(ll);
                }
                case StrOrRegSymSXP s -> {
                    return Optional.of(s.reifyString());
                }
                default -> {
                    throw new CompilerException("Bad assignment: " + l);
                }
            }
        }
    }
}
