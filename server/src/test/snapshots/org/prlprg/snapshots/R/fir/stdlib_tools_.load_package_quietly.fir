fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2500306237;
    st `.load_package_quietly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2500306237(package, `lib.loc`) {
  (reg package:*, reg lib_loc:*) -+> V { var package:*, var `lib.loc`:*, reg package1:*, reg package2:V, reg r:V, reg c:L, reg _try_quietly:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg paste0:cls, reg package3:*, reg package4:V, reg p:p(V +), reg r4:V, reg search:cls, reg r5:V, reg match:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r9:V, reg r10:V, reg c1:L, reg detach:cls, reg pos2:*, reg pos3:V, reg p1:p(V +), reg r12:V, reg library:cls, reg package5:*, reg package6:V, reg p2:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V |
    mkenv;
    st package = package;
    st `lib.loc` = lib_loc;
    package1 = ld package;
    check L1() else D0();
  D0():
    deopt 0 [package1];
  L1():
    package2 = force? package1;
    checkMissing(package2);
    r = `!=`(package2, "base");
    c = `as.logical`(r);
    if c then L2() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L2():
    _try_quietly = ldf `.try_quietly`;
    check L3() else D1();
  D1():
    deopt 5 [];
  L3():
    p4 = prom<V +>{
      sym = ldf match;
      base = ldf match in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L0(r2):
      st pos = r2;
      sym1 = ldf `is.na`;
      base1 = ldf `is.na` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L4():
      paste0 = ldf paste0;
      p = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      r4 = dyn paste0("package:", p);
      search = ldf search;
      r5 = dyn search();
      match = ldf match in base;
      r6 = dyn match(r4, r5, NA_INT, NULL);
      goto L0(r6);
    L5():
      r1 = dyn base(<lang paste0("package:", package)>, <lang search()>);
      goto L0(r1);
    L1(r8):
      r10 = `!`(r8);
      c1 = `as.logical`(r10);
      if c1 then L8() else L2();
    L6():
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      is_na = ldf `is.na` in base;
      r9 = dyn is_na(pos1);
      goto L1(r9);
    L7():
      r7 = dyn base1(<sym pos>);
      goto L1(r7);
    L2():
      goto L3();
    L3():
      library = ldf library;
      p2 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      p3 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      r16 = dyn library[, `lib.loc`, `character.only`, verbose](p2, p3, TRUE, FALSE);
      return r16;
    L8():
      detach = ldf detach;
      p1 = prom<V +>{
        pos2 = ld pos;
        pos3 = force? pos2;
        checkMissing(pos3);
        return pos3;
      };
      r12 = dyn detach[pos](p1);
      goto L3();
    };
    r18 = dyn _try_quietly(p4);
    check L4() else D2();
  D2():
    deopt 7 [r18];
  L4():
    popenv;
    return r18;
  }
}