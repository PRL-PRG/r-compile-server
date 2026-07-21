fun main() {
  () -+> v1(I) {
    r1: I = f< B,B -+> I >(TRUE, TRUE);
    r2: I = f< B,B -+> I >(TRUE, FALSE);
    r3: I = f< B,B -+> I >(FALSE, TRUE);
    r4: I = f< B,B -+> I >(FALSE, FALSE);
    r1u: v1(I) = box< I --> v1(I) >(r1);
    return r1u;
  }
}

fun f(cond1, cond2) {
  (reg cond1:B, reg cond2:B) -+> I {
    if cond1 then BB1() else BB2();
  BB5():
    return 100;
  BB1():
    if cond2 then BB3() else BB4();
  BB2():
    goto BB5();
  BB3():
    goto BB5();
  BB4():
    goto BB5();
  }
}
