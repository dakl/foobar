from foobar import add
import time

def test_add():
    time.sleep(5)
    assert add(1,2) == 3
