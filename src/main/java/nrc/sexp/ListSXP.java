package nrc.sexp;

import nrc.util.Pair;

import java.util.List;
import java.util.Optional;


public class ListSXP extends VectorSXP<Pair<Optional<String>, SEXP>> {

    public ListSXP(List<Pair<Optional<String>, SEXP>> data) {
        super(SEXPTypes.LISTSXP, data);
    }

    public static void flatten(ListSXP src, List<Pair<Optional<String>, SEXP>> target) {
        for (var i : src) {
            if (i.b() instanceof ListSXP lst) {
                flatten(lst, target);
            } else {
                target.add(i);
            }
        }
    }
}
