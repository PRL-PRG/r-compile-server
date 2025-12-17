fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1130406736;
    st package_native_routine_registration_skeleton = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1130406736(dir, con, align, character_only, include_declarations) {
  (reg dir:*, reg con:*, reg align:*, reg character_only:*, reg include_declarations:*) -+> V { var dir:*, var con:*, reg con_isMissing:L, reg con_orDefault:*, reg stdout:cls, reg r:V, reg p:p(V +), var align:*, reg align_isMissing:L, reg align_orDefault:*, var character_only:*, reg character_only_isMissing:L, reg character_only_orDefault:*, var include_declarations:*, reg include_declarations_isMissing:L, reg include_declarations_orDefault:*, reg package_native_routine_registration_db:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg character_only1:*, reg character_only2:V, reg p2:p(V +), reg r4:V, reg writeLines:cls, reg format_native_routine_registration_db_for_skeleton:cls, reg nrdb:*, reg nrdb1:V, reg p3:p(V +), reg align1:*, reg align2:V, reg p4:p(V +), reg include_declarations1:*, reg include_declarations2:V, reg p5:p(V +), reg r8:V, reg p6:p(V +), reg con1:*, reg con2:V, reg p7:p(V +), reg r11:V |
    mkenv;
    st dir = dir;
    con_isMissing = missing.0(con);
    if con_isMissing then L0() else L1(con);
  L0():
    p = prom<V +>{
      stdout = ldf stdout;
      r = dyn stdout();
      return r;
    };
    goto L1(p);
  L1(con_orDefault):
    st con = con_orDefault;
    align_isMissing = missing.0(align);
    if align_isMissing then L2(TRUE) else L2(align);
  L2(align_orDefault):
    st align = align_orDefault;
    character_only_isMissing = missing.0(character_only);
    if character_only_isMissing then L3(TRUE) else L3(character_only);
  L3(character_only_orDefault):
    st character_only = character_only_orDefault;
    include_declarations_isMissing = missing.0(include_declarations);
    if include_declarations_isMissing then L4(TRUE) else L4(include_declarations);
  L4(include_declarations_orDefault):
    st include_declarations = include_declarations_orDefault;
    package_native_routine_registration_db = ldf package_native_routine_registration_db;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p2 = prom<V +>{
      character_only1 = ld character_only;
      character_only2 = force? character_only1;
      checkMissing(character_only2);
      return character_only2;
    };
    r4 = dyn package_native_routine_registration_db(p1, p2);
    check L6() else D1();
  D1():
    deopt 4 [r4];
  L6():
    st nrdb = r4;
    writeLines = ldf writeLines;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    p6 = prom<V +>{
      format_native_routine_registration_db_for_skeleton = ldf format_native_routine_registration_db_for_skeleton;
      p3 = prom<V +>{
        nrdb = ld nrdb;
        nrdb1 = force? nrdb;
        checkMissing(nrdb1);
        return nrdb1;
      };
      p4 = prom<V +>{
        align1 = ld align;
        align2 = force? align1;
        checkMissing(align2);
        return align2;
      };
      p5 = prom<V +>{
        include_declarations1 = ld include_declarations;
        include_declarations2 = force? include_declarations1;
        checkMissing(include_declarations2);
        return include_declarations2;
      };
      r8 = dyn format_native_routine_registration_db_for_skeleton(p3, p4, p5);
      return r8;
    };
    p7 = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    r11 = dyn writeLines(p6, p7);
    check L8() else D3();
  D3():
    deopt 10 [r11];
  L8():
    popenv;
    return r11;
  }
}