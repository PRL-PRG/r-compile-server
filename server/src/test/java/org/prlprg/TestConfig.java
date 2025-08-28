package org.prlprg;

/// Environment variables to configure tests.
///
/// @see Config
public class TestConfig extends Config {
  /// If set, snapshots will not be read, only written.
  ///
  /// This is **unset** by default.
  public static final boolean OVERRIDE_SNAPSHOTS = get("OVERRIDE_SNAPSHOTS", false);
}
