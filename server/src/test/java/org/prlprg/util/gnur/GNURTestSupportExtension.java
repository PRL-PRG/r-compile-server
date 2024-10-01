package org.prlprg.util.gnur;

import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.api.extension.ParameterContext;
import org.junit.jupiter.api.extension.ParameterResolutionException;
import org.junit.jupiter.api.extension.ParameterResolver;
import org.prlprg.rsession.TestRSession;

public class GNURTestSupportExtension implements ParameterResolver {

  @Override
  public boolean supportsParameter(
      ParameterContext parameterContext, ExtensionContext extensionContext)
      throws ParameterResolutionException {
    return parameterContext.getParameter().getType() == GNUR.class;
  }

  @Override
  public Object resolveParameter(
      ParameterContext parameterContext, ExtensionContext extensionContext)
      throws ParameterResolutionException {
    var store = extensionContext.getStore(ExtensionContext.Namespace.GLOBAL);
    var key = GNURTestSupportExtension.class.getName();
    return store.getOrComputeIfAbsent(key, _ -> GNURFactory.createRestarting(new TestRSession()));
  }
}
