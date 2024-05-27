package org.prlprg.sexp;

import java.util.ArrayList;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

/**
 * Either {@link SymSXP} (AST identifier) or {@link LangSXP} (AST call). Note that AST nodes can
 * also be simple-scalars.
 */
@Immutable
public sealed interface SymOrLangSXP extends SEXP permits SymSXP, LangSXP {
  @ParseMethod
  private static SymOrLangSXP parse(Parser p) {
    var s = p.scanner();

    SymOrLangSXP result = p.parse(SymSXP.class);
    while (s.trySkip('(')) {
      var args = new ArrayList<TaggedElem>();
      if (!s.trySkip(')')) {
        while (true) {
          var arg = p.parse(TaggedElem.class);
          args.add(arg);
          if (s.trySkip(')')) {
            break;
          }
          s.assertAndSkip(',');
        }
      }
      result = SEXPs.lang(result, SEXPs.list(args));
    }
    return result;
  }
}
