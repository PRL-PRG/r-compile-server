package org.prlprg.session.gnur;

import org.prlprg.util.SingletonParameterResolver;

public class GNURParameterResolver extends SingletonParameterResolver<GNUR> {
  public GNURParameterResolver() {
    super(GNUR.class);
  }
}
