fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2648285261;
    st gctorture2 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2648285261(step, wait, inhibit_release) {
  (reg step:*, reg wait:*, reg inhibit_release:*) -+> V { var step:*, var wait:*, reg wait_isMissing:L, reg wait_orDefault:*, reg step1:*, reg step2:V, reg p:p(V +), var inhibit_release:*, reg inhibit_release_isMissing:L, reg inhibit_release_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg step3:*, reg step4:V, reg wait1:*, reg wait2:V, reg inhibit_release1:*, reg inhibit_release2:V, reg gctorture2:cls, reg r3:V |
    mkenv;
    st step = step;
    wait_isMissing = missing.0(wait);
    if wait_isMissing then L0() else L1(wait);
  L0():
    p = prom<V +>{
      step1 = ld step;
      step2 = force? step1;
      checkMissing(step2);
      return step2;
    };
    goto L1(p);
  L1(wait_orDefault):
    st wait = wait_orDefault;
    inhibit_release_isMissing = missing.0(inhibit_release);
    if inhibit_release_isMissing then L2(FALSE) else L2(inhibit_release);
  L2(inhibit_release_orDefault):
    st inhibit_release = inhibit_release_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r2):
    popenv;
    return r2;
  L4():
    step3 = ld step;
    check L6() else D0();
  L5():
    r1 = dyn base(<lang gctorture2(step, wait, inhibit_release)>);
    goto L3(r1);
  D0():
    deopt 2 [step3];
  L6():
    step4 = force? step3;
    checkMissing(step4);
    wait1 = ld wait;
    check L7() else D1();
  D1():
    deopt 4 [wait1];
  L7():
    wait2 = force? wait1;
    checkMissing(wait2);
    inhibit_release1 = ld inhibit_release;
    check L8() else D2();
  D2():
    deopt 6 [inhibit_release1];
  L8():
    inhibit_release2 = force? inhibit_release1;
    checkMissing(inhibit_release2);
    gctorture2 = ldf gctorture2 in base;
    r3 = dyn gctorture2(step4, wait2, inhibit_release2);
    check L9() else D3();
  D3():
    deopt 9 [r3];
  L9():
    goto L3(r3);
  }
}