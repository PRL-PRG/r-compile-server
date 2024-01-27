package org.prlprg.compile;

import com.google.common.collect.Iterables;
import org.prlprg.sexp.*;

import java.util.*;

public final class CodeTools {
    private CodeTools() {
    }

    public static Set<String> findLocals(SEXP... ex) {
        var locals = new HashSet<String>();
        var todo = new LinkedList<>(Arrays.asList(ex));

        // the code is following compiler:::findLocals1 from R
        // IMHO, it could be simplified, but I'm not sure if
        // I'm missing something
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
                        // FIXME: this is pretty unsound:
                        //  1. it depends on the environment into which we assign the variable
                        //  2. the first parameter does not always need to be 'x'
                        var args = l.args().values();
                        todo.addAll(args.subList(1, args.size()));

                        yield Optional.of(l.arg(0).value().cast(StrOrRegSymSXP.class).reifyString());
                    }
                    case "function", "~" -> Optional.<String>empty();
                    case "local", "expression", "quote" -> {
                        // TODO: support shadowing
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
            } else if (elem instanceof ExprSXP l) {
                Iterables.addAll(todo, l);
            } else if (elem instanceof VecSXP l) {
                Iterables.addAll(todo, l);
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
