package org.prlprg.rshruntime;

import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.util.StringCase;

@EnumSerialCaseIs(StringCase.PASCAL)
public enum FeedbackKind {
  CALL,
  TEST,
  TYPE
}
