package org.prlprg.sexp;

import java.util.Arrays;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.StringCase;

/**
 * Since {@link EnvType} implies {@link SEXPType#ENV}, a union of both enums that can be encoded in
 * a single identifier.
 */
public sealed interface SEXPOrEnvType permits SEXPType, EnvType {
  @ParseMethod
  private static SEXPOrEnvType parse(Parser p) {
    var s = p.scanner();

    var id =
        StringCase.convert(
            s.readIdentifierOrKeyword(), StringCase.SNAKE, StringCase.SCREAMING_SNAKE);
    if (Arrays.stream(SEXPType.values()).anyMatch(e -> e.name().equals(id))) {
      return SEXPType.valueOf(id);
    } else if (Arrays.stream(EnvType.values()).anyMatch(e -> e.name().equals(id))) {
      return EnvType.valueOf(id);
    } else {
      throw s.fail("SEXPType or EnvType", id);
    }
  }
}
