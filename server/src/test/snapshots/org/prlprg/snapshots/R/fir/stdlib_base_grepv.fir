fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1099686420;
    st grepv = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1099686420(pattern, x, `ignore.case`, perl, value, fixed, useBytes, invert) {
  (reg pattern:*, reg x:*, reg ignore_case:*, reg perl:*, reg value:*, reg fixed:*, reg useBytes:*, reg invert:*) -+> V { var pattern:*, var x:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var value:*, reg value_isMissing:L, reg value_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, var invert:*, reg invert_isMissing:L, reg invert_orDefault:*, reg grep:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg ignore_case1:*, reg ignore_case2:V, reg p2:p(V +), reg perl1:*, reg perl2:V, reg p3:p(V +), reg value1:*, reg value2:V, reg p4:p(V +), reg fixed1:*, reg fixed2:V, reg p5:p(V +), reg useBytes1:*, reg useBytes2:V, reg p6:p(V +), reg invert1:*, reg invert2:V, reg p7:p(V +), reg r8:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L0(FALSE) else L0(ignore_case);
  L0(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    value_isMissing = missing.0(value);
    if value_isMissing then L2(TRUE) else L2(value);
  L2(value_orDefault):
    st value = value_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L3(FALSE) else L3(fixed);
  L3(fixed_orDefault):
    st fixed = fixed_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L4(FALSE) else L4(useBytes);
  L4(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    invert_isMissing = missing.0(invert);
    if invert_isMissing then L5(FALSE) else L5(invert);
  L5(invert_orDefault):
    st invert = invert_orDefault;
    grep = ldf grep;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      ignore_case1 = ld `ignore.case`;
      ignore_case2 = force? ignore_case1;
      checkMissing(ignore_case2);
      return ignore_case2;
    };
    p3 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p4 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p5 = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      return fixed2;
    };
    p6 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    p7 = prom<V +>{
      invert1 = ld invert;
      invert2 = force? invert1;
      checkMissing(invert2);
      return invert2;
    };
    r8 = dyn grep(p, p1, p2, p3, p4, p5, p6, p7);
    check L7() else D1();
  D1():
    deopt 10 [r8];
  L7():
    popenv;
    return r8;
  }
}