package org.prlprg.bc;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import org.prlprg.sexp.*;

public class Primitives {

  private Primitives() {}

  // this is a very primitive implementation of the match.call
  public static LangSXP matchCall(CloSXP definition, LangSXP call) {
    var matched = ImmutableList.<TaggedElem>builder();
    var remaining = new ArrayList<SEXP>();
    var formals = definition.formals();

    if (formals.size() < call.args().size()) {
      throw new IllegalArgumentException("Too many arguments and we do not support ... yet");
    }

    for (var actual : call.args()) {
      if (actual.tag() != null) {
        matched.add(actual);
        formals = formals.remove(actual.tag());
      } else {
        remaining.add(actual.value());
      }
    }

    for (int i = 0; i < remaining.size(); i++) {
      matched.add(new TaggedElem(formals.get(i).tag(), remaining.get(i)));
    }

    return SEXPs.lang(call.fun(), SEXPs.list(matched.build()));
  }
}
