fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1963940050;
    st `update.packageStatus` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1963940050(object, `lib.loc`, repositories, `...`) {
  (reg object:*, reg lib_loc:*, reg repositories:*, reg ddd:dots) -+> V { var object:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg levels:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), var repositories:*, reg repositories_isMissing:L, reg repositories_orDefault:*, reg levels1:cls, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r5:V, reg c3:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), var `...`:dots?, reg packageStatus:cls, reg lib_loc1:*, reg lib_loc2:V, reg p4:p(V +), reg repositories1:*, reg repositories2:V, reg p5:p(V +), reg r12:V |
    mkenv;
    st object = object;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0() else L1(lib_loc);
  L0():
    p1 = prom<V +>{
      levels = ldf levels;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        c = `is.object`(object2);
        if c then L1() else L2(object2);
      L0(dx1):
        c1 = `is.object`(dx1);
        if c1 then L5() else L6(dx1);
      L1():
        dr = tryDispatchBuiltin.1("$", object2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(object4):
        r = `$`(object4, <sym inst>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L4(dx5):
        return dx5;
      L5():
        dr2 = tryDispatchBuiltin.1("$", dx1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L7() else L6(dr2);
      L6(dx3):
        r1 = `$`(dx3, <sym LibPath>);
        goto L4(r1);
      L7():
        dx4 = getTryDispatchBuiltinValue(dr2);
        goto L4(dx4);
      };
      r3 = dyn levels(p);
      return r3;
    };
    goto L1(p1);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    repositories_isMissing = missing.0(repositories);
    if repositories_isMissing then L2() else L3(repositories);
  L2():
    p3 = prom<V +>{
      levels1 = ldf levels;
      p2 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        c2 = `is.object`(object6);
        if c2 then L1() else L2(object6);
      L0(dx7):
        c3 = `is.object`(dx7);
        if c3 then L5() else L6(dx7);
      L1():
        dr4 = tryDispatchBuiltin.1("$", object6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(object8):
        r5 = `$`(object8, <sym avail>);
        goto L0(r5);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx6);
      L4(dx11):
        return dx11;
      L5():
        dr6 = tryDispatchBuiltin.1("$", dx7);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L7() else L6(dr6);
      L6(dx9):
        r6 = `$`(dx9, <sym Repository>);
        goto L4(r6);
      L7():
        dx10 = getTryDispatchBuiltinValue(dr6);
        goto L4(dx10);
      };
      r8 = dyn levels1(p2);
      return r8;
    };
    goto L3(p3);
  L3(repositories_orDefault):
    st repositories = repositories_orDefault;
    st `...` = ddd;
    packageStatus = ldf packageStatus;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p4 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    p5 = prom<V +>{
      repositories1 = ld repositories;
      repositories2 = force? repositories1;
      checkMissing(repositories2);
      return repositories2;
    };
    r12 = dyn packageStatus[`lib.loc`, repositories](p4, p5);
    check L5() else D1();
  D1():
    deopt 6 [r12];
  L5():
    popenv;
    return r12;
  }
}