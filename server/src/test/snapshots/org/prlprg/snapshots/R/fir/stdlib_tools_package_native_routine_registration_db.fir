fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2475533896;
    st package_native_routine_registration_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2475533896(dir, character_only) {
  (reg dir:*, reg character_only:*) -+> V { var dir:*, var character_only:*, reg character_only_isMissing:L, reg character_only_orDefault:*, reg package_ff_call_db:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg native_routine_registration_db_from_ff_call_db:cls, reg calls:*, reg calls1:V, reg p1:p(V +), reg dir3:*, reg dir4:V, reg p2:p(V +), reg character_only1:*, reg character_only2:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st dir = dir;
    character_only_isMissing = missing.0(character_only);
    if character_only_isMissing then L0(TRUE) else L0(character_only);
  L0(character_only_orDefault):
    st character_only = character_only_orDefault;
    package_ff_call_db = ldf package_ff_call_db;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn package_ff_call_db(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st calls = r1;
    native_routine_registration_db_from_ff_call_db = ldf native_routine_registration_db_from_ff_call_db;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      calls = ld calls;
      calls1 = force? calls;
      checkMissing(calls1);
      return calls1;
    };
    p2 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p3 = prom<V +>{
      character_only1 = ld character_only;
      character_only2 = force? character_only1;
      checkMissing(character_only2);
      return character_only2;
    };
    r5 = dyn native_routine_registration_db_from_ff_call_db(p1, p2, p3);
    check L4() else D3();
  D3():
    deopt 10 [r5];
  L4():
    popenv;
    return r5;
  }
}