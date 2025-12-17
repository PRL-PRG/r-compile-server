fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3798835836;
    st q = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3798835836(save, status, runLast) {
  (reg save:*, reg status:*, reg runLast:*) -+> V { var save:*, reg save_isMissing:L, reg save_orDefault:*, var status:*, reg status_isMissing:L, reg status_orDefault:*, var runLast:*, reg runLast_isMissing:L, reg runLast_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg save1:*, reg save2:V, reg status1:*, reg status2:V, reg runLast1:*, reg runLast2:V, reg quit:cls, reg r2:V |
    mkenv;
    save_isMissing = missing.0(save);
    if save_isMissing then L0("default") else L0(save);
  L0(save_orDefault):
    st save = save_orDefault;
    status_isMissing = missing.0(status);
    if status_isMissing then L1(0.0) else L1(status);
  L1(status_orDefault):
    st status = status_orDefault;
    runLast_isMissing = missing.0(runLast);
    if runLast_isMissing then L2(TRUE) else L2(runLast);
  L2(runLast_orDefault):
    st runLast = runLast_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    save1 = ld save;
    check L6() else D0();
  L5():
    r = dyn base(<lang quit(save, status, runLast)>);
    goto L3(r);
  D0():
    deopt 2 [save1];
  L6():
    save2 = force? save1;
    checkMissing(save2);
    status1 = ld status;
    check L7() else D1();
  D1():
    deopt 4 [status1];
  L7():
    status2 = force? status1;
    checkMissing(status2);
    runLast1 = ld runLast;
    check L8() else D2();
  D2():
    deopt 6 [runLast1];
  L8():
    runLast2 = force? runLast1;
    checkMissing(runLast2);
    quit = ldf quit in base;
    r2 = dyn quit(save2, status2, runLast2);
    check L9() else D3();
  D3():
    deopt 9 [r2];
  L9():
    goto L3(r2);
  }
}