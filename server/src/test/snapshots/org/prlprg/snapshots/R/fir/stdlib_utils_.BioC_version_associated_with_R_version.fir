fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.BioC_version_associated_with_R_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg numeric_version:cls, reg Sys_getenv:cls, reg _BioC_version_associated_with_R_version_default:*, reg _BioC_version_associated_with_R_version_default1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    numeric_version = ldf numeric_version;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      p = prom<V +>{
        _BioC_version_associated_with_R_version_default = ld `.BioC_version_associated_with_R_version_default`;
        _BioC_version_associated_with_R_version_default1 = force? _BioC_version_associated_with_R_version_default;
        checkMissing(_BioC_version_associated_with_R_version_default1);
        return _BioC_version_associated_with_R_version_default1;
      };
      r1 = dyn Sys_getenv("R_BIOC_VERSION", p);
      return r1;
    };
    r3 = dyn numeric_version(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}