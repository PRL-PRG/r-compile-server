fun main() {
  () --> V { reg r0:I, reg r1:p?(I -), reg r2:p(I -), reg r3:p?(I -), reg r4:V, reg r5:V |
    r0 = 42;
    r1 = r0 as p?(I -);
    r2 = prom<I ->{ return 42; };
    r3 = r2 as p?(I -);
    r4 = force? r1;
    r5 = force? r3;
    return r5;
  }
}
