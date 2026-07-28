from build.artifacts import console
import pytest


def test_extract():
    assert console.extract(["open", "source"]) == ["source"]


def test_lower():
    assert console.lower("OPEN-SOURCE") == "open-source"


def test_two_words():
    assert console.join(["open", "source"], "-") == "open-source"


def test_three_words():
    assert console.join(["open", "source", "part"], "-") == "open-source-part"


def test_join_empty_args_list():
    assert console.join([], "-") == ''


def test_join_one_string_list():
    assert console.join(["open"], "-") == "open"


def test_empty_separator():
    assert console.join(["open", "source"], '') == "opensource"


def test_whitespace_separator():
    assert console.join(["open", "source"], ' ') == "open source"


def test_string_with_separator():
    assert console.join(["open-source", "part"], "-") == "open-source-part"

"""There's a better way to test numbers"""
# def test_join_with_numbers():
#     assert console.join(["open", "7", "source"], "-6") == "open-source"


"""This should assert a value error, but I'm not ding errors yet"""
def test_multi_char_separator():
    expected = "open-source"

    with pytest.raises(ValueError, match="[Separator must be 1 character]"):
        result = console.join(["open", "source"], "--")


# def test_very_long_strings():
#     pytest.fail("Still not sure how this should be handled")
