#? crashes
fun main() {
  () -~> v(R) { reg r0:v(I)o, reg r1:v(R) |
    r0 = v(I)[1, 2, 3];
    # We explicitly *allow* stupid casts, because when FIŘ improves types it can create them.
    r1 = r0 as v(R);
    return r1;
  }
}
