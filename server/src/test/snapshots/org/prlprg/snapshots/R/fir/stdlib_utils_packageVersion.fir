fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3040525129;
    st packageVersion = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3040525129(pkg, `lib.loc`) {
  (reg pkg:*, reg lib_loc:*) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg suppressWarnings:cls, reg packageDescription:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg res:*, reg res1:V, reg is_na:cls, reg r7:V, reg r8:V, reg c:L, reg package_version:cls, reg res2:*, reg res3:V, reg p3:p(V +), reg r10:V, reg stop:cls, reg packageNotFoundError:cls, reg pkg3:*, reg pkg4:V, reg p4:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p5:p(V +), reg sys_call:cls, reg r13:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg r17:V |
    mkenv;
    st pkg = pkg;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    suppressWarnings = ldf suppressWarnings;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      packageDescription = ldf packageDescription;
      p = prom<V +>{
        pkg1 = ld pkg;
        pkg2 = force? pkg1;
        checkMissing(pkg2);
        return pkg2;
      };
      p1 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      r2 = dyn packageDescription[, `lib.loc`, fields](p, p1, "Version");
      return r2;
    };
    r4 = dyn suppressWarnings(p2);
    check L4() else D1();
  D1():
    deopt 3 [r4];
  L4():
    st res = r4;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L9() else L2();
  L5():
    res = ld res;
    check L7() else D2();
  L6():
    r5 = dyn base(<sym res>);
    goto L1(r5);
  D2():
    deopt 7 [res];
  L2():
    stop = ldf stop;
    check L13() else D6();
  L7():
    res1 = force? res;
    checkMissing(res1);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(res1);
    check L8() else D3();
  L9():
    package_version = ldf package_version;
    check L10() else D4();
  D3():
    deopt 10 [r7];
  D4():
    deopt 13 [];
  D6():
    deopt 17 [];
  L8():
    goto L1(r7);
  L10():
    p3 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      return res3;
    };
    r10 = dyn package_version(p3);
    check L11() else D5();
  L13():
    p7 = prom<V +>{
      packageNotFoundError = ldf packageNotFoundError;
      p4 = prom<V +>{
        pkg3 = ld pkg;
        pkg4 = force? pkg3;
        checkMissing(pkg4);
        return pkg4;
      };
      p5 = prom<V +>{
        lib_loc3 = ld `lib.loc`;
        lib_loc4 = force? lib_loc3;
        checkMissing(lib_loc4);
        return lib_loc4;
      };
      p6 = prom<V +>{
        sys_call = ldf `sys.call`;
        r13 = dyn sys_call();
        return r13;
      };
      r15 = dyn packageNotFoundError(p4, p5, p6);
      return r15;
    };
    r17 = dyn stop(p7);
    check L14() else D7();
  D5():
    deopt 15 [r10];
  D7():
    deopt 19 [r17];
  L11():
    popenv;
    return r10;
  L14():
    popenv;
    return r17;
  }
}