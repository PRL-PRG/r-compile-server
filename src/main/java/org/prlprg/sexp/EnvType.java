package org.prlprg.sexp;

import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.util.StringCase;

/** Sub-categorization of {@link EnvSXP}s. */
@EnumSerialCaseIs(StringCase.SNAKE)
public enum EnvType implements SEXPOrEnvType {
  USER,
  GLOBAL,
  NAMESPACE,
  BASE,
  EMPTY,
}
