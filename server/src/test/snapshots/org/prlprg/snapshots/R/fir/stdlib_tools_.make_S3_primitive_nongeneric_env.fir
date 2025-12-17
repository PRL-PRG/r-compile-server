fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner75665465;
    st `.make_S3_primitive_nongeneric_env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner75665465(parent) {
  (reg parent:*) -+> V { var parent:*, reg parent_isMissing:L, reg parent_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg list2env:cls, reg as_list:cls, reg __:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg parent1:*, reg parent2:V, reg p3:p(V +), reg r7:V |
    mkenv;
    parent_isMissing = missing.0(parent);
    if parent_isMissing then L0() else L1(parent);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(parent_orDefault):
    st parent = parent_orDefault;
    list2env = ldf list2env;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      as_list = ldf `as.list`;
      p1 = prom<V +>{
        __ = ldf `::`;
        r2 = dyn __("base", ".ArgsEnv");
        return r2;
      };
      r4 = dyn as_list[, `all.names`](p1, TRUE);
      return r4;
    };
    p3 = prom<V +>{
      parent1 = ld parent;
      parent2 = force? parent1;
      checkMissing(parent2);
      return parent2;
    };
    r7 = dyn list2env[, hash, parent](p2, TRUE, p3);
    check L3() else D1();
  D1():
    deopt 7 [r7];
  L3():
    popenv;
    return r7;
  }
}