#? crashes
#? [fir2c.eval]noEval
fun main() {
  () -~> v(R) {
    r0: v(I)o = v(I)[1, 2, 3];
    # We explicitly *allow* stupid casts, because when FIŘ improves types it can create them.
    r1: v(R) = r0 as v(R);
    return r1;
  }
}
