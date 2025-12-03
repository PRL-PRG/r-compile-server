/// Support for snapshot tests. Also support tests that depend on other test outputs, by caching
/// those outputs and saving them if the code breaks so dependent code can still be tested.
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.snapshots;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
