from build.artifacts import database

def test_find():

    data = {"api" : 
            {
                "meaning": "...",
                "example": "..."
            }
        }
    
    assert database.find("api", data) == True


def test_define():

    data = {"api" : 
            {
                "meaning": "...",
                "example": "..."
            }
        }
    
    definition = database.define("api", data) 
    assert definition.term == "api"